	.macro song label, music_player, unknown
	.4byte \label
	.2byte \music_player
	.2byte \unknown
	.endm

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
