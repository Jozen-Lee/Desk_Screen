/**
 * @file music.h
 * @author tutu
 * @brief
 * @version 0.1
 * @date 2022-12-24
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef _MUSIC_H_
#define _MUSIC_H_

#include <Arduino.h>

/*--------------- note freq in C tune --------------*/
#define NOTE_D0 (-1)
#define LOW_DO 262
#define LOW_RE 294
#define LOW_MI 330
#define LOW_FA 349
#define LOW_SO 392
#define LOW_LA 440
#define LOW_SI 494

#define MID_DO 523
#define MID_RE 587
#define MID_MI 659
#define MID_FA 698
#define MID_SO 784
#define MID_LA 880
#define MID_SI 988

#define HIGH_DO 1047
#define HIGH_RE 1175
#define HIGH_MI 1319
#define HIGH_FA 1397
#define HIGH_SO 1568
#define HIGH_LA 1760
#define HIGH_SI 1976

/* STOP note should be added to tune array*/
#define STOP_NOTE 0

#define MUSIC_NUM 2
/*-------------------- Two Tiger ------------------------*/
int16_t two_tiger_tune[] = {
    MID_DO, MID_RE, MID_MI, MID_DO, MID_DO, MID_RE, MID_MI, MID_DO, MID_MI, MID_FA, MID_SO,
    MID_MI, MID_FA, MID_SO, MID_SO, MID_LA, MID_SO, MID_FA, MID_MI, MID_DO, MID_SO, MID_LA,
    MID_SO, MID_FA, MID_MI, MID_DO, MID_RE, LOW_SO, MID_DO, MID_RE, LOW_SO, MID_DO, STOP_NOTE
};
int16_t two_tiger_beat[] = { 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 8, 4, 4, 8, 3, 1,
                              3, 1, 4, 4, 3, 1, 3, 1, 4, 4, 4, 4, 8, 4, 4, 8 };

/*-------------------- Sky City ------------------------*/
int16_t sky_city_tune[] = { NOTE_D0, NOTE_D0, NOTE_D0, MID_LA,  MID_SI,  HIGH_DO, MID_SI,   HIGH_DO, HIGH_MI, MID_SI,
                             MID_SI,  MID_SI,  MID_MI,  MID_MI,  MID_LA,  MID_SO,  MID_LA,   HIGH_DO, MID_SO,  MID_SO,
                             MID_SO,  MID_MI,  MID_FA,  MID_MI,  MID_FA,  HIGH_DO, MID_MI,   MID_MI,  NOTE_D0, HIGH_DO,
                             HIGH_DO, HIGH_DO, MID_SI,  MID_FA,  MID_FA,  MID_SI,  MID_SI,   MID_SI,  NOTE_D0, MID_LA,
                             MID_SI,  HIGH_DO, MID_SI,  HIGH_DO, HIGH_MI, MID_SI,  MID_SI,   MID_SI,  MID_MI,  MID_MI,
                             MID_LA,  MID_SO,  MID_LA,  HIGH_DO, MID_SO,  MID_SO,  MID_SO,   MID_RE,  MID_MI,  MID_FA,
                             HIGH_DO, MID_SI,  MID_SI,  HIGH_DO, HIGH_DO, HIGH_RE, HIGH_RE,  HIGH_MI, HIGH_DO, HIGH_DO,
                             HIGH_DO, HIGH_DO, MID_SI,  MID_LA,  MID_LA,  MID_SI,  MID_SO,   MID_LA,  MID_LA,  MID_LA,
                             HIGH_DO, HIGH_RE, HIGH_MI, HIGH_RE, HIGH_MI, HIGH_SO, HIGH_RE,  HIGH_RE, HIGH_RE, MID_SO,
                             MID_SO,  HIGH_DO, MID_SI,  HIGH_DO, HIGH_MI, HIGH_MI, HIGH_MI,  HIGH_MI, HIGH_MI, MID_LA,
                             MID_SI,  HIGH_DO, MID_SI,  HIGH_RE, HIGH_RE, HIGH_DO, MID_SO,   MID_SO,  MID_SO,  HIGH_FA,
                             HIGH_MI, HIGH_RE, HIGH_DO, HIGH_MI, HIGH_MI, HIGH_MI, HIGH_MI,  HIGH_LA, HIGH_LA, HIGH_SO,
                             HIGH_SO, HIGH_MI, HIGH_RE, HIGH_DO, HIGH_DO, NOTE_D0, HIGH_DO,  HIGH_RE, HIGH_DO, HIGH_RE,
                             HIGH_RE, HIGH_SO, HIGH_MI, HIGH_MI, HIGH_MI, HIGH_MI, HIGH_LA,  HIGH_LA, HIGH_SO, HIGH_SO,
                             HIGH_MI, HIGH_RE, HIGH_DO, HIGH_DO, NOTE_D0, HIGH_DO, HIGH_RE,  HIGH_DO, HIGH_RE, HIGH_RE,
                             MID_SI,  MID_LA,  MID_LA,  MID_LA,  MID_LA,  MID_SI,  STOP_NOTE };
int16_t sky_city_beat[] = { 8, 8,  8, 4, 4,  12, 4,  8, 8, 8, 8, 8, 4, 4,  12, 4,  8, 8, 8, 8, 8, 8, 12, 4, 8,  8,
                             8, 8,  4, 4, 4,  4,  12, 4, 8, 8, 8, 8, 8, 4,  4,  12, 4, 8, 8, 8, 8, 8, 4,  4, 12, 4,
                             8, 8,  8, 8, 8,  4,  4,  8, 4, 2, 2, 2, 4, 4,  4,  4,  2, 4, 8, 4, 4, 4, 4,  8, 8,  8,
                             8, 8,  4, 4, 12, 4,  8,  8, 8, 8, 8, 4, 4, 12, 4,  8,  8, 8, 8, 8, 8, 4, 4,  8, 8,  4,
                             4, 12, 2, 4, 8,  8,  8,  8, 8, 8, 8, 8, 8, 8,  8,  8,  8, 4, 4, 8, 8, 4, 4,  8, 4,  4,
                             8, 8,  8, 8, 8,  8,  8,  8, 8, 8, 4, 4, 8, 8,  4,  4,  8, 4, 2, 4, 8, 8, 8,  8, 4,  4 };

int16_t* music[MUSIC_NUM][2] = { { two_tiger_tune, two_tiger_beat }, { sky_city_tune, sky_city_beat } };

#endif