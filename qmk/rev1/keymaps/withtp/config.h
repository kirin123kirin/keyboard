
#pragma once


/*
 * Busywait Version :id=busywait-version
 * Note: This is not recommended, you may encounter jerky movement or unsent inputs. Please use interrupt or USART version if possible.
 */

#ifdef PS2_USE_BUSYWAIT
#   define PS2_CLOCK_PORT  PORTD
#   define PS2_CLOCK_PIN   PIND
#   define PS2_CLOCK_DDR   DDRD
#   define PS2_CLOCK_BIT   3
#   define PS2_DATA_PORT   PORTF
#   define PS2_DATA_PIN    PINF
#   define PS2_DATA_DDR    DDRF
#   define PS2_DATA_BIT    4
#endif



/*
 * Interrupt Version :id=interrupt-version
 * The following example uses B5 for clock and B6 for data. You can use any INT or PCINT pin for clock, and any pin for data.
 */

#ifdef PS2_USE_INT
#   define PS2_CLOCK_PORT  PORTB
#   define PS2_CLOCK_PIN   PINB
#   define PS2_CLOCK_DDR   DDRB
#   define PS2_CLOCK_BIT   5
#   define PS2_DATA_PORT   PORTB
#   define PS2_DATA_PIN    PINB
#   define PS2_DATA_DDR    DDRB
#   define PS2_DATA_BIT    6

#   define PS2_INT_INIT()  do {    \
       PCICR |= (1<<PCIE0);        \
    } while (0)
#   define PS2_INT_ON()  do {      \
       PCMSK0 |= (1<<PCINT5);      \
    } while (0)
#   define PS2_INT_OFF() do {      \
       PCMSK0 &= ~(1<<PCINT5);     \
    } while (0)
#   define PS2_INT_VECT   PCINT0_vect
#endif

/*
 * USART Version :id=usart-version
 * To use USART on the ATMega32u4, you have to use PD5 for clock and PD2 for data. If one of those are unavailable, you need to use interrupt version.
 *   synchronous, odd parity, 1-bit stop, 8-bit data, sample at falling edge
 *   set DDR of CLOCK as input to be slave
 */

#ifdef PS2_USE_USART
#   define PS2_CLOCK_PORT  PORTD
#   define PS2_CLOCK_PIN   PIND
#   define PS2_CLOCK_DDR   DDRD
#   define PS2_CLOCK_BIT   5
#   define PS2_DATA_PORT   PORTD
#   define PS2_DATA_PIN    PIND
#   define PS2_DATA_DDR    DDRD
#   define PS2_DATA_BIT    2

#   define PS2_USART_INIT() do {   \
       PS2_CLOCK_DDR &= ~(1<<PS2_CLOCK_BIT);   \
       PS2_DATA_DDR &= ~(1<<PS2_DATA_BIT);     \
       UCSR1C = ((1 << UMSEL10) |  \
                 (3 << UPM10)   |  \
                 (0 << USBS1)   |  \
                 (3 << UCSZ10)  |  \
                 (0 << UCPOL1));   \
       UCSR1A = 0;                 \
       UBRR1H = 0;                 \
       UBRR1L = 0;                 \
    } while (0)
#   define PS2_USART_RX_INT_ON() do {  \
       UCSR1B = ((1 << RXCIE1) |       \
                 (1 << RXEN1));        \
    } while (0)
#   define PS2_USART_RX_POLL_ON() do { \
       UCSR1B = (1 << RXEN1);          \
    } while (0)
#   define PS2_USART_OFF() do {    \
       UCSR1C = 0;                 \
       UCSR1B &= ~((1 << RXEN1) |  \
                   (1 << TXEN1));  \
    } while (0)
#   define PS2_USART_RX_READY      (UCSR1A & (1<<RXC1))
#   define PS2_USART_RX_DATA       UDR1
#   define PS2_USART_ERROR         (UCSR1A & ((1<<FE1) | (1<<DOR1) | (1<<UPE1)))
#   define PS2_USART_RX_VECT       USART1_RX_vect
#endif


