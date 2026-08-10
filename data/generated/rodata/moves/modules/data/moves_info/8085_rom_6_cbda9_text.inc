	@ src/data/moves_info.h:48 moves_info_line_48
	.globl gText_Rom_6CBDA9
gText_Rom_6CBDA9: @ 0x086CBDA9
	.string "はたく$"
	.if (. - gText_Rom_6CBDA9) > 0x4
	.error "gText_Rom_6CBDA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_6CBDA9) < 0x4
	.space 0x4 - (. - gText_Rom_6CBDA9)
	.endif
	@ analyzed canonical ROM range 0x086CBDAD-0x086E1025
	@ pass3: M4A audio region; proven headers/tracks are labeled below
	.byte 0xF3, 0xED, 0xEA, 0xE8, 0xE2, 0xD6, 0xCB, 0xC3, 0xBB, 0xB3, 0xAD, 0xAF, 0xBB, 0xC4, 0xC3, 0xC0
	.byte 0xC5, 0xD8, 0xED, 0xFD, 0x08, 0x16, 0x26, 0x35, 0x3F, 0x47, 0x55, 0x68, 0x73, 0x71, 0x6A, 0x67
	.byte 0x68, 0x67, 0x5E, 0x4F, 0x3F, 0x33, 0x22, 0x0C, 0xF7, 0xEC, 0xE4, 0xD6, 0xC1, 0xAF, 0xA2, 0x9D
	.byte 0x9B, 0x97, 0x92, 0x96, 0x9F, 0xAB, 0xB5, 0xC4, 0xD4, 0xE5, 0xF3, 0xFE, 0x0A, 0x1A, 0x29, 0x33
	.byte 0x39, 0x3C, 0x42, 0x43, 0x42, 0x3C, 0x37, 0x31, 0x29, 0x1B, 0x0E, 0x04, 0xFC, 0xF3, 0xE9, 0xE2
	.byte 0xE0, 0xDF, 0xD9, 0xD1, 0xC7, 0xC1, 0xB7, 0xAC, 0xA2, 0xA1, 0xAE, 0xBB, 0xBB, 0xB2, 0xB4, 0xC8
	.byte 0xDC, 0xED, 0xFB

	.globl DirectSoundWaveData_Instrument_094_JP_086CBE10
DirectSoundWaveData_Instrument_094_JP_086CBE10: @ 0x086CBE10
	@ M4A DirectSound WaveData (instrument)
	m4a_wave_data_header 0x40000000, 0x00A44000, 0x0000048A, 0x00000937
	.incbin "audio/direct_sound/8085_rom_6_cbda9_text/DirectSoundWaveData_Instrument_094_JP_086CBE10.bin" @ 2360 DirectSound sample bytes

	.globl DirectSoundWaveData_Instrument_095_JP_086CC758
DirectSoundWaveData_Instrument_095_JP_086CC758: @ 0x086CC758
	@ M4A DirectSound WaveData (instrument)
	m4a_wave_data_header 0x40000000, 0x00A44000, 0x0000056B, 0x00000A36
	.incbin "audio/direct_sound/8085_rom_6_cbda9_text/DirectSoundWaveData_Instrument_095_JP_086CC758.bin" @ 2616 DirectSound sample bytes

	.globl DirectSoundWaveData_Instrument_096_JP_086CD1A0
DirectSoundWaveData_Instrument_096_JP_086CD1A0: @ 0x086CD1A0
	@ M4A DirectSound WaveData (instrument)
	m4a_wave_data_header 0x40000000, 0x00A44000, 0x000005D6, 0x00000C76
	.incbin "audio/direct_sound/8085_rom_6_cbda9_text/DirectSoundWaveData_Instrument_096_JP_086CD1A0.bin" @ 3192 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_000_JP_086CDE28
DirectSoundWaveData_Cry_000_JP_086CDE28: @ 0x086CDE28
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001FF7
	.incbin "audio/direct_sound/8085_rom_6_cbda9_text/DirectSoundWaveData_Cry_000_JP_086CDE28.bin" @ 4220 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_001_JP_086CEEB4
DirectSoundWaveData_Cry_001_JP_086CEEB4: @ 0x086CEEB4
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001FFB
	.incbin "audio/direct_sound/8085_rom_6_cbda9_text/DirectSoundWaveData_Cry_001_JP_086CEEB4.bin" @ 4224 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_002_JP_086CFF44
DirectSoundWaveData_Cry_002_JP_086CFF44: @ 0x086CFF44
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000255E
	.incbin "audio/direct_sound/8085_rom_6_cbda9_text/DirectSoundWaveData_Cry_002_JP_086CFF44.bin" @ 4936 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_003_JP_086D129C
DirectSoundWaveData_Cry_003_JP_086D129C: @ 0x086D129C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001BDD
	.incbin "audio/direct_sound/8085_rom_6_cbda9_text/DirectSoundWaveData_Cry_003_JP_086D129C.bin" @ 3680 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_004_JP_086D210C
DirectSoundWaveData_Cry_004_JP_086D210C: @ 0x086D210C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001BFE
	.incbin "audio/direct_sound/8085_rom_6_cbda9_text/DirectSoundWaveData_Cry_004_JP_086D210C.bin" @ 3696 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_005_JP_086D2F8C
DirectSoundWaveData_Cry_005_JP_086D2F8C: @ 0x086D2F8C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002543
	.incbin "audio/direct_sound/8085_rom_6_cbda9_text/DirectSoundWaveData_Cry_005_JP_086D2F8C.bin" @ 4920 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_006_JP_086D42D4
DirectSoundWaveData_Cry_006_JP_086D42D4: @ 0x086D42D4
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001BE3
	.incbin "audio/direct_sound/8085_rom_6_cbda9_text/DirectSoundWaveData_Cry_006_JP_086D42D4.bin" @ 3684 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_007_JP_086D5148
DirectSoundWaveData_Cry_007_JP_086D5148: @ 0x086D5148
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002154
	.incbin "audio/direct_sound/8085_rom_6_cbda9_text/DirectSoundWaveData_Cry_007_JP_086D5148.bin" @ 4400 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_008_JP_086D6288
DirectSoundWaveData_Cry_008_JP_086D6288: @ 0x086D6288
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002544
	.incbin "audio/direct_sound/8085_rom_6_cbda9_text/DirectSoundWaveData_Cry_008_JP_086D6288.bin" @ 4920 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_009_JP_086D75D0
DirectSoundWaveData_Cry_009_JP_086D75D0: @ 0x086D75D0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000100D
	.incbin "audio/direct_sound/8085_rom_6_cbda9_text/DirectSoundWaveData_Cry_009_JP_086D75D0.bin" @ 2120 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_010_JP_086D7E28
DirectSoundWaveData_Cry_010_JP_086D7E28: @ 0x086D7E28
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002D14
	.incbin "audio/direct_sound/8085_rom_6_cbda9_text/DirectSoundWaveData_Cry_010_JP_086D7E28.bin" @ 5952 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_011_JP_086D9578
DirectSoundWaveData_Cry_011_JP_086D9578: @ 0x086D9578
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000134F
	.incbin "audio/direct_sound/8085_rom_6_cbda9_text/DirectSoundWaveData_Cry_011_JP_086D9578.bin" @ 2552 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_012_JP_086D9F80
DirectSoundWaveData_Cry_012_JP_086D9F80: @ 0x086D9F80
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001F69
	.incbin "audio/direct_sound/8085_rom_6_cbda9_text/DirectSoundWaveData_Cry_012_JP_086D9F80.bin" @ 4148 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_013_JP_086DAFC4
DirectSoundWaveData_Cry_013_JP_086DAFC4: @ 0x086DAFC4
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000233E
	.incbin "audio/direct_sound/8085_rom_6_cbda9_text/DirectSoundWaveData_Cry_013_JP_086DAFC4.bin" @ 4652 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_014_JP_086DC200
DirectSoundWaveData_Cry_014_JP_086DC200: @ 0x086DC200
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002565
	.incbin "audio/direct_sound/8085_rom_6_cbda9_text/DirectSoundWaveData_Cry_014_JP_086DC200.bin" @ 4940 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_015_JP_086DD55C
DirectSoundWaveData_Cry_015_JP_086DD55C: @ 0x086DD55C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000076E
	.incbin "audio/direct_sound/8085_rom_6_cbda9_text/DirectSoundWaveData_Cry_015_JP_086DD55C.bin" @ 984 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_016_JP_086DD944
DirectSoundWaveData_Cry_016_JP_086DD944: @ 0x086DD944
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001D05
	.incbin "audio/direct_sound/8085_rom_6_cbda9_text/DirectSoundWaveData_Cry_016_JP_086DD944.bin" @ 3832 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_017_JP_086DE84C
DirectSoundWaveData_Cry_017_JP_086DE84C: @ 0x086DE84C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000213C
	.incbin "audio/direct_sound/8085_rom_6_cbda9_text/DirectSoundWaveData_Cry_017_JP_086DE84C.bin" @ 4388 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_018_JP_086DF980
DirectSoundWaveData_Cry_018_JP_086DF980: @ 0x086DF980
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000F21
	.incbin "audio/direct_sound/8085_rom_6_cbda9_text/DirectSoundWaveData_Cry_018_JP_086DF980.bin" @ 2000 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_019_JP_086E0160
DirectSoundWaveData_Cry_019_JP_086E0160: @ 0x086E0160
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001250
	.incbin "audio/direct_sound/8085_rom_6_cbda9_text/DirectSoundWaveData_Cry_019_JP_086E0160.bin" @ 2420 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_020_JP_086E0AE4
DirectSoundWaveData_Cry_020_JP_086E0AE4: @ 0x086E0AE4
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002213
	.incbin "audio/direct_sound/8085_rom_6_cbda9_text/DirectSoundWaveData_Cry_020_JP_086E0AE4.bin" @ 1330 DirectSound sample bytes
