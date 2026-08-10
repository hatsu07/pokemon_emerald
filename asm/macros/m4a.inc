	.macro song label, music_player, unknown
	.4byte \label
	.2byte \music_player
	.2byte \unknown
	.endm

	.equiv M4A_CMD_FINE,  0xB1
	.equiv M4A_CMD_GOTO,  0xB2
	.equiv M4A_CMD_PATT,  0xB3
	.equiv M4A_CMD_PEND,  0xB4
	.equiv M4A_CMD_REPT,  0xB5
	.equiv M4A_CMD_PRIO,  0xBA
	.equiv M4A_CMD_TEMPO, 0xBB
	.equiv M4A_CMD_KEYSH, 0xBC
	.equiv M4A_CMD_VOICE, 0xBD
	.equiv M4A_CMD_VOL,   0xBE
	.equiv M4A_CMD_PAN,   0xBF
	.equiv M4A_CMD_BEND,  0xC0
	.equiv M4A_CMD_BENDR, 0xC1
	.equiv M4A_CMD_LFOS,  0xC2
	.equiv M4A_CMD_LFODL, 0xC3
	.equiv M4A_CMD_MOD,   0xC4
	.equiv M4A_CMD_MODT,  0xC5
	.equiv M4A_CMD_TUNE,  0xC8
	.equiv M4A_CMD_PORT,  0xCC
	.equiv M4A_CMD_EOT,   0xCE
	.equiv M4A_CMD_TIE,   0xCF

	.macro music_player info_struct, track_struct, unknown_1, unknown_2
	.4byte \info_struct
	.4byte \track_struct
	.byte \unknown_1
	.space 1
	.2byte \unknown_2
	.endm


@ M4A DirectSound wave/sample header (struct WaveData on ROM).
@ sample_count_minus_1 is the stored size field used by the original data.
.macro m4a_wave_data_header flags:req, freq:req, loop_start:req, sample_count_minus_1:req
    .4byte \flags
    .4byte \freq
    .4byte \loop_start
    .4byte \sample_count_minus_1
.endm

@ M4A song header before its track pointer array.
.macro m4a_song_header track_count:req, block_count:req, priority:req, reverb:req, voicegroup:req
    .byte \track_count, \block_count, \priority, \reverb
    .4byte \voicegroup
.endm

.macro m4a_cmd command:req
    .byte \command
.endm

.macro m4a_cmd_u8 command:req, value:req
    .byte \command, \value
.endm

.macro m4a_fine
    m4a_cmd M4A_CMD_FINE
.endm

.macro m4a_goto target:req
    m4a_cmd M4A_CMD_GOTO
    .4byte \target
.endm

.macro m4a_patt target:req
    m4a_cmd M4A_CMD_PATT
    .4byte \target
.endm

.macro m4a_pend
    m4a_cmd M4A_CMD_PEND
.endm

.macro m4a_rept count:req, target:req
    m4a_cmd_u8 M4A_CMD_REPT, \count
    .4byte \target
.endm

.macro m4a_prio priority:req
    m4a_cmd_u8 M4A_CMD_PRIO, \priority
.endm

.macro m4a_tempo tempo:req
    m4a_cmd_u8 M4A_CMD_TEMPO, \tempo
.endm

.macro m4a_keysh key_shift:req
    m4a_cmd_u8 M4A_CMD_KEYSH, \key_shift
.endm

.macro m4a_voice voice:req
    m4a_cmd_u8 M4A_CMD_VOICE, \voice
.endm

.macro m4a_vol volume:req
    m4a_cmd_u8 M4A_CMD_VOL, \volume
.endm

.macro m4a_pan pan:req
    m4a_cmd_u8 M4A_CMD_PAN, \pan
.endm

.macro m4a_bend bend:req
    m4a_cmd_u8 M4A_CMD_BEND, \bend
.endm

.macro m4a_bendr bend_range:req
    m4a_cmd_u8 M4A_CMD_BENDR, \bend_range
.endm

.macro m4a_lfos speed:req
    m4a_cmd_u8 M4A_CMD_LFOS, \speed
.endm

.macro m4a_lfodl delay:req
    m4a_cmd_u8 M4A_CMD_LFODL, \delay
.endm

.macro m4a_mod depth:req
    m4a_cmd_u8 M4A_CMD_MOD, \depth
.endm

.macro m4a_modt type:req
    m4a_cmd_u8 M4A_CMD_MODT, \type
.endm

.macro m4a_tune tune:req
    m4a_cmd_u8 M4A_CMD_TUNE, \tune
.endm

.macro m4a_port port:req
    m4a_cmd_u8 M4A_CMD_PORT, \port
.endm

.macro m4a_eot
    m4a_cmd M4A_CMD_EOT
.endm

.macro m4a_eot_key key:req
    m4a_cmd_u8 M4A_CMD_EOT, \key
.endm

.macro m4a_wait command:req
    .byte \command
.endm

.macro m4a_tie
    m4a_cmd M4A_CMD_TIE
.endm

.macro m4a_tie_key key:req
    m4a_cmd_u8 M4A_CMD_TIE, \key
.endm

.macro m4a_tie_key_vel key:req, velocity:req
    .byte M4A_CMD_TIE, \key, \velocity
.endm

.macro m4a_tie_key_vel_gate key:req, velocity:req, gate:req
    .byte M4A_CMD_TIE, \key, \velocity, \gate
.endm

.macro m4a_note command:req
    .byte \command
.endm

.macro m4a_note_key command:req, key:req
    .byte \command, \key
.endm

.macro m4a_note_key_vel command:req, key:req, velocity:req
    .byte \command, \key, \velocity
.endm

.macro m4a_note_key_vel_gate command:req, key:req, velocity:req, gate:req
    .byte \command, \key, \velocity, \gate
.endm

.macro m4a_running_cmd_u8 value:req
    .byte \value
.endm

.macro m4a_running_eot_key key:req
    .byte \key
.endm

.macro m4a_running_note_key key:req
    .byte \key
.endm

.macro m4a_running_note_key_vel key:req, velocity:req
    .byte \key, \velocity
.endm

.macro m4a_running_note_key_vel_gate key:req, velocity:req, gate:req
    .byte \key, \velocity, \gate
.endm
