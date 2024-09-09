#ifndef TERM_H
#define TERM_H

#include <stdint.h>

void term_init();
void term_write_color(const char *s, const uint8_t color);
void term_writeline(const char *s);
void term_write(const char *s);
void term_err(const char *s);
void term_warn(const char *s);
void term_write_char(const char *c);

void term_format(const char *s, void *ptr);

#endif // TERM_H
