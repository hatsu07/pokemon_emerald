	@ src/battle_debug.c:417 battle_debug_line_417
	.globl gText_Rom_72C0D2
gText_Rom_72C0D2: @ 0x0872C0D2
	.string "にじ$"
	.if (. - gText_Rom_72C0D2) > 0x3
	.error "gText_Rom_72C0D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_72C0D2) < 0x3
	.space 0x3 - (. - gText_Rom_72C0D2)
	.endif
	@ analyzed canonical ROM range 0x0872C0D5-0x087B40C9
	@ pass3: M4A audio region; proven headers/tracks are labeled below
	.byte 0xAE, 0x11, 0x3E, 0x22, 0x11, 0x45, 0xEE, 0x16, 0x0F, 0xD2, 0xEE, 0x0E, 0x1F, 0xE1, 0xF0, 0x0E
	.byte 0x20, 0xF1, 0xF1, 0xAF, 0x22, 0x26, 0x3F, 0xE1, 0xBC, 0x20, 0x21, 0x21, 0x21, 0x11, 0x11, 0x11
	.byte 0x10, 0x1F, 0x25, 0x2E, 0xEE, 0xEE, 0xEF, 0xE0, 0x01, 0x01, 0xE2, 0xBC, 0x22, 0x22, 0x22, 0x12
	.byte 0x11, 0x12, 0xF3, 0x50, 0xEF, 0xDA, 0x01, 0x21, 0x12, 0x11, 0x16, 0x1E, 0xEE, 0xBC, 0x2F, 0x21
	.byte 0x20, 0x2E, 0x45, 0xEF, 0xEE, 0xEF, 0xE0, 0xDA, 0x22, 0xE9, 0x03, 0x6F, 0xEF, 0xEF, 0xE0, 0xE1
	.byte 0xBD, 0x12, 0x15, 0x41, 0xE1, 0xBC, 0x21, 0x14, 0x5F, 0x0E, 0xFE, 0xFE, 0x1D, 0xBF, 0x22, 0x26
	.byte 0xFF, 0xEF, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x1F, 0x1D, 0xE4, 0x02, 0x21, 0x44, 0xF0, 0xFF
	.byte 0xEF, 0x0F, 0xFA, 0xC2, 0x23, 0x23, 0x21, 0x21, 0x21, 0x2F, 0x43, 0xFF, 0xEF, 0xE0, 0xE1, 0xDC
	.byte 0x11, 0x13, 0x41, 0x0F, 0xEB, 0x11, 0x21, 0x11, 0x11, 0x15, 0x1E, 0x0F, 0x0F, 0xCD, 0xF1, 0x14
	.byte 0x3F, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xF1, 0xDC, 0x11, 0x22, 0x50, 0x0F, 0xFF, 0xFE, 0x0F, 0x0F
	.byte 0x0F, 0x1C, 0xD2, 0x12, 0x12, 0x12, 0xF3, 0x4F, 0xFE, 0x0E, 0x0F, 0xFE, 0xE9, 0x02, 0x12, 0x12
	.byte 0x11, 0x11, 0x51, 0xFE, 0xFB, 0xE1, 0x2F, 0x43, 0x0F, 0xFC, 0xC2, 0x11, 0x35, 0xEE, 0xFD, 0xCF
	.byte 0x01, 0x25, 0x0F, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xF0, 0x00, 0xF0, 0xFE, 0x00, 0x00
	.byte 0x00, 0xF1, 0xF1, 0xF1, 0xEC, 0xF1, 0x22, 0x11, 0x21, 0x11, 0x11, 0x11, 0x10, 0x01, 0x01, 0xF1
	.byte 0xF1, 0xF1, 0xF1, 0xF3, 0x4E, 0xFE, 0xDB, 0x20, 0x11, 0x20, 0x11, 0x11, 0x00, 0x10, 0xFF, 0x00
	.byte 0x00, 0x1F, 0x1F, 0x1F, 0x43, 0xEF, 0xEF, 0xEF, 0xE1, 0xDC, 0x01, 0x20, 0x12, 0x11, 0x11, 0x11
	.byte 0x11, 0x01, 0xF1, 0xF4, 0x3F, 0xEF, 0xCC, 0x11, 0x14, 0x4E, 0xEF, 0xDC, 0xFF, 0x21, 0x11, 0xFB
	.byte 0x00, 0x11, 0x10, 0x11, 0x5F, 0xEE, 0xFE, 0xFF, 0xEE, 0x00, 0x00

	.globl DirectSoundWaveData_Cry_092_JP_0872C1F0
DirectSoundWaveData_Cry_092_JP_0872C1F0: @ 0x0872C1F0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002D6F
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_092_JP_0872C1F0.bin" @ 6000 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_093_JP_0872D970
DirectSoundWaveData_Cry_093_JP_0872D970: @ 0x0872D970
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001C79
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_093_JP_0872D970.bin" @ 3760 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_094_JP_0872E830
DirectSoundWaveData_Cry_094_JP_0872E830: @ 0x0872E830
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002FE1
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_094_JP_0872E830.bin" @ 6324 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_095_JP_087300F4
DirectSoundWaveData_Cry_095_JP_087300F4: @ 0x087300F4
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000384B
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_095_JP_087300F4.bin" @ 7432 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_096_JP_08731E0C
DirectSoundWaveData_Cry_096_JP_08731E0C: @ 0x08731E0C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000381F
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_096_JP_08731E0C.bin" @ 7412 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_097_JP_08733B10
DirectSoundWaveData_Cry_097_JP_08733B10: @ 0x08733B10
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002EFE
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_097_JP_08733B10.bin" @ 6204 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_098_JP_0873535C
DirectSoundWaveData_Cry_098_JP_0873535C: @ 0x0873535C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002F12
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_098_JP_0873535C.bin" @ 6216 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_099_JP_08736BB4
DirectSoundWaveData_Cry_099_JP_08736BB4: @ 0x08736BB4
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002FE7
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_099_JP_08736BB4.bin" @ 6324 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_100_JP_08738478
DirectSoundWaveData_Cry_100_JP_08738478: @ 0x08738478
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000030C1
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_100_JP_08738478.bin" @ 6440 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_101_JP_08739DB0
DirectSoundWaveData_Cry_101_JP_08739DB0: @ 0x08739DB0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002475
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_101_JP_08739DB0.bin" @ 4816 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_102_JP_0873B090
DirectSoundWaveData_Cry_102_JP_0873B090: @ 0x0873B090
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00003DB5
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_102_JP_0873B090.bin" @ 8148 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_103_JP_0873D074
DirectSoundWaveData_Cry_103_JP_0873D074: @ 0x0873D074
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001D34
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_103_JP_0873D074.bin" @ 3856 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_104_JP_0873DF94
DirectSoundWaveData_Cry_104_JP_0873DF94: @ 0x0873DF94
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001BDD
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_104_JP_0873DF94.bin" @ 3680 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_105_JP_0873EE04
DirectSoundWaveData_Cry_105_JP_0873EE04: @ 0x0873EE04
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002414
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_105_JP_0873EE04.bin" @ 4764 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_106_JP_087400B0
DirectSoundWaveData_Cry_106_JP_087400B0: @ 0x087400B0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002278
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_106_JP_087400B0.bin" @ 4552 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_107_JP_08741288
DirectSoundWaveData_Cry_107_JP_08741288: @ 0x08741288
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001D40
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_107_JP_08741288.bin" @ 3864 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_108_JP_087421B0
DirectSoundWaveData_Cry_108_JP_087421B0: @ 0x087421B0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002757
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_108_JP_087421B0.bin" @ 5196 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_109_JP_0874360C
DirectSoundWaveData_Cry_109_JP_0874360C: @ 0x0874360C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000029E3
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_109_JP_0874360C.bin" @ 5532 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_110_JP_08744BB8
DirectSoundWaveData_Cry_110_JP_08744BB8: @ 0x08744BB8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002584
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_110_JP_08744BB8.bin" @ 4956 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_111_JP_08745F24
DirectSoundWaveData_Cry_111_JP_08745F24: @ 0x08745F24
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002778
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_111_JP_08745F24.bin" @ 5212 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_112_JP_08747390
DirectSoundWaveData_Cry_112_JP_08747390: @ 0x08747390
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001C8C
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_112_JP_08747390.bin" @ 3772 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_113_JP_0874825C
DirectSoundWaveData_Cry_113_JP_0874825C: @ 0x0874825C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001D2C
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_113_JP_0874825C.bin" @ 3852 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_114_JP_08749178
DirectSoundWaveData_Cry_114_JP_08749178: @ 0x08749178
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002423
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_114_JP_08749178.bin" @ 4772 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_115_JP_0874A42C
DirectSoundWaveData_Cry_115_JP_0874A42C: @ 0x0874A42C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000123F
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_115_JP_0874A42C.bin" @ 2412 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_116_JP_0874ADA8
DirectSoundWaveData_Cry_116_JP_0874ADA8: @ 0x0874ADA8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001031
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_116_JP_0874ADA8.bin" @ 2140 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_117_JP_0874B614
DirectSoundWaveData_Cry_117_JP_0874B614: @ 0x0874B614
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000012F6
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_117_JP_0874B614.bin" @ 2504 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_118_JP_0874BFEC
DirectSoundWaveData_Cry_118_JP_0874BFEC: @ 0x0874BFEC
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002564
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_118_JP_0874BFEC.bin" @ 4936 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_119_JP_0874D344
DirectSoundWaveData_Cry_119_JP_0874D344: @ 0x0874D344
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000267C
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_119_JP_0874D344.bin" @ 5080 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_120_JP_0874E72C
DirectSoundWaveData_Cry_120_JP_0874E72C: @ 0x0874E72C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002850
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_120_JP_0874E72C.bin" @ 5324 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_121_JP_0874FC08
DirectSoundWaveData_Cry_121_JP_0874FC08: @ 0x0874FC08
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002494
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_121_JP_0874FC08.bin" @ 4832 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_122_JP_08750EF8
DirectSoundWaveData_Cry_122_JP_08750EF8: @ 0x08750EF8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000019C2
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_122_JP_08750EF8.bin" @ 3404 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_123_JP_08751C54
DirectSoundWaveData_Cry_123_JP_08751C54: @ 0x08751C54
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00005BE4
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_123_JP_08751C54.bin" @ 12132 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_124_JP_08754BC8
DirectSoundWaveData_Cry_124_JP_08754BC8: @ 0x08754BC8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00003BC2
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_124_JP_08754BC8.bin" @ 7892 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_125_JP_08756AAC
DirectSoundWaveData_Cry_125_JP_08756AAC: @ 0x08756AAC
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001DE7
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_125_JP_08756AAC.bin" @ 3948 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_126_JP_08757A28
DirectSoundWaveData_Cry_126_JP_08757A28: @ 0x08757A28
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000017D8
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_126_JP_08757A28.bin" @ 3148 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_127_JP_08758684
DirectSoundWaveData_Cry_127_JP_08758684: @ 0x08758684
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000236B
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_127_JP_08758684.bin" @ 4676 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_128_JP_087598D8
DirectSoundWaveData_Cry_128_JP_087598D8: @ 0x087598D8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000024C2
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_128_JP_087598D8.bin" @ 4856 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_129_JP_0875ABE0
DirectSoundWaveData_Cry_129_JP_0875ABE0: @ 0x0875ABE0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000270C
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_129_JP_0875ABE0.bin" @ 5156 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_130_JP_0875C014
DirectSoundWaveData_Cry_130_JP_0875C014: @ 0x0875C014
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001C9D
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_130_JP_0875C014.bin" @ 3780 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_131_JP_0875CEE8
DirectSoundWaveData_Cry_131_JP_0875CEE8: @ 0x0875CEE8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000156B
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_131_JP_0875CEE8.bin" @ 2828 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_132_JP_0875DA04
DirectSoundWaveData_Cry_132_JP_0875DA04: @ 0x0875DA04
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001B6D
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_132_JP_0875DA04.bin" @ 3624 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_133_JP_0875E83C
DirectSoundWaveData_Cry_133_JP_0875E83C: @ 0x0875E83C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002AB7
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_133_JP_0875E83C.bin" @ 5640 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_134_JP_0875FE54
DirectSoundWaveData_Cry_134_JP_0875FE54: @ 0x0875FE54
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001E8D
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_134_JP_0875FE54.bin" @ 4036 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_135_JP_08760E28
DirectSoundWaveData_Cry_135_JP_08760E28: @ 0x08760E28
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001DF1
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_135_JP_08760E28.bin" @ 3956 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_136_JP_08761DAC
DirectSoundWaveData_Cry_136_JP_08761DAC: @ 0x08761DAC
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000026BF
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_136_JP_08761DAC.bin" @ 5116 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_137_JP_087631B8
DirectSoundWaveData_Cry_137_JP_087631B8: @ 0x087631B8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000019BE
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_137_JP_087631B8.bin" @ 3400 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_138_JP_08763F10
DirectSoundWaveData_Cry_138_JP_08763F10: @ 0x08763F10
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000019B8
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_138_JP_08763F10.bin" @ 3396 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_139_JP_08764C64
DirectSoundWaveData_Cry_139_JP_08764C64: @ 0x08764C64
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000017C7
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_139_JP_08764C64.bin" @ 3140 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_140_JP_087658B8
DirectSoundWaveData_Cry_140_JP_087658B8: @ 0x087658B8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001A80
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_140_JP_087658B8.bin" @ 3500 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_141_JP_08766674
DirectSoundWaveData_Cry_141_JP_08766674: @ 0x08766674
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002F1B
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_141_JP_08766674.bin" @ 6220 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_142_JP_08767ED0
DirectSoundWaveData_Cry_142_JP_08767ED0: @ 0x08767ED0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000A06
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_142_JP_08767ED0.bin" @ 1324 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_143_JP_0876840C
DirectSoundWaveData_Cry_143_JP_0876840C: @ 0x0876840C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002DBE
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_143_JP_0876840C.bin" @ 6040 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_144_JP_08769BB4
DirectSoundWaveData_Cry_144_JP_08769BB4: @ 0x08769BB4
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001DDA
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_144_JP_08769BB4.bin" @ 3944 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_145_JP_0876AB2C
DirectSoundWaveData_Cry_145_JP_0876AB2C: @ 0x0876AB2C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002DC2
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_145_JP_0876AB2C.bin" @ 6044 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_146_JP_0876C2D8
DirectSoundWaveData_Cry_146_JP_0876C2D8: @ 0x0876C2D8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001661
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_146_JP_0876C2D8.bin" @ 2956 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_147_JP_0876CE74
DirectSoundWaveData_Cry_147_JP_0876CE74: @ 0x0876CE74
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000202C
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_147_JP_0876CE74.bin" @ 4248 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_148_JP_0876DF1C
DirectSoundWaveData_Cry_148_JP_0876DF1C: @ 0x0876DF1C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000024CB
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_148_JP_0876DF1C.bin" @ 4860 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_149_JP_0876F228
DirectSoundWaveData_Cry_149_JP_0876F228: @ 0x0876F228
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00003AD5
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_149_JP_0876F228.bin" @ 7768 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_150_JP_08771090
DirectSoundWaveData_Cry_150_JP_08771090: @ 0x08771090
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00003AD8
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_150_JP_08771090.bin" @ 7768 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_151_JP_08772EF8
DirectSoundWaveData_Cry_151_JP_08772EF8: @ 0x08772EF8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000A0C
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_151_JP_08772EF8.bin" @ 1328 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_152_JP_08773438
DirectSoundWaveData_Cry_152_JP_08773438: @ 0x08773438
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000010EC
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_152_JP_08773438.bin" @ 2236 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_153_JP_08773D04
DirectSoundWaveData_Cry_153_JP_08773D04: @ 0x08773D04
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001F52
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_153_JP_08773D04.bin" @ 4136 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_154_JP_08774D3C
DirectSoundWaveData_Cry_154_JP_08774D3C: @ 0x08774D3C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000D75
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_154_JP_08774D3C.bin" @ 1780 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_155_JP_08775440
DirectSoundWaveData_Cry_155_JP_08775440: @ 0x08775440
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000016F8
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_155_JP_08775440.bin" @ 3032 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_156_JP_08776028
DirectSoundWaveData_Cry_156_JP_08776028: @ 0x08776028
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000049AD
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_156_JP_08776028.bin" @ 9728 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_157_JP_08778638
DirectSoundWaveData_Cry_157_JP_08778638: @ 0x08778638
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000236D
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_157_JP_08778638.bin" @ 4680 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_158_JP_08779890
DirectSoundWaveData_Cry_158_JP_08779890: @ 0x08779890
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000271E
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_158_JP_08779890.bin" @ 5164 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_159_JP_0877ACCC
DirectSoundWaveData_Cry_159_JP_0877ACCC: @ 0x0877ACCC
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00003155
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_159_JP_0877ACCC.bin" @ 6516 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_160_JP_0877C650
DirectSoundWaveData_Cry_160_JP_0877C650: @ 0x0877C650
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000007EA
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_160_JP_0877C650.bin" @ 1048 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_161_JP_0877CA78
DirectSoundWaveData_Cry_161_JP_0877CA78: @ 0x0877CA78
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000C0E
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_161_JP_0877CA78.bin" @ 1592 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_162_JP_0877D0C0
DirectSoundWaveData_Cry_162_JP_0877D0C0: @ 0x0877D0C0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000014FF
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_162_JP_0877D0C0.bin" @ 2772 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_163_JP_0877DBA4
DirectSoundWaveData_Cry_163_JP_0877DBA4: @ 0x0877DBA4
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000028F1
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_163_JP_0877DBA4.bin" @ 5408 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_164_JP_0877F0D4
DirectSoundWaveData_Cry_164_JP_0877F0D4: @ 0x0877F0D4
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000D60
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_164_JP_0877F0D4.bin" @ 1768 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_165_JP_0877F7CC
DirectSoundWaveData_Cry_165_JP_0877F7CC: @ 0x0877F7CC
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001024
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_165_JP_0877F7CC.bin" @ 2132 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_166_JP_08780030
DirectSoundWaveData_Cry_166_JP_08780030: @ 0x08780030
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000019D5
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_166_JP_08780030.bin" @ 3412 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_167_JP_08780D94
DirectSoundWaveData_Cry_167_JP_08780D94: @ 0x08780D94
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000017C8
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_167_JP_08780D94.bin" @ 3140 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_168_JP_087819E8
DirectSoundWaveData_Cry_168_JP_087819E8: @ 0x087819E8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002CD7
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_168_JP_087819E8.bin" @ 5920 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_169_JP_08783118
DirectSoundWaveData_Cry_169_JP_08783118: @ 0x08783118
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001877
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_169_JP_08783118.bin" @ 3232 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_170_JP_08783DC8
DirectSoundWaveData_Cry_170_JP_08783DC8: @ 0x08783DC8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001450
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_170_JP_08783DC8.bin" @ 2684 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_171_JP_08784854
DirectSoundWaveData_Cry_171_JP_08784854: @ 0x08784854
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000E11
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_171_JP_08784854.bin" @ 1860 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_172_JP_08784FA8
DirectSoundWaveData_Cry_172_JP_08784FA8: @ 0x08784FA8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000B5D
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_172_JP_08784FA8.bin" @ 1504 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_173_JP_08785598
DirectSoundWaveData_Cry_173_JP_08785598: @ 0x08785598
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000D6C
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_173_JP_08785598.bin" @ 1772 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_174_JP_08785C94
DirectSoundWaveData_Cry_174_JP_08785C94: @ 0x08785C94
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001502
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_174_JP_08785C94.bin" @ 2776 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_175_JP_0878677C
DirectSoundWaveData_Cry_175_JP_0878677C: @ 0x0878677C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000D74
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_175_JP_0878677C.bin" @ 1776 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_176_JP_08786E7C
DirectSoundWaveData_Cry_176_JP_08786E7C: @ 0x08786E7C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000145C
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_176_JP_08786E7C.bin" @ 2688 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_177_JP_0878790C
DirectSoundWaveData_Cry_177_JP_0878790C: @ 0x0878790C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001C8E
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_177_JP_0878790C.bin" @ 3772 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_178_JP_087887D8
DirectSoundWaveData_Cry_178_JP_087887D8: @ 0x087887D8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000E1C
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_178_JP_087887D8.bin" @ 1864 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_179_JP_08788F30
DirectSoundWaveData_Cry_179_JP_08788F30: @ 0x08788F30
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001A73
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_179_JP_08788F30.bin" @ 3492 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_180_JP_08789CE4
DirectSoundWaveData_Cry_180_JP_08789CE4: @ 0x08789CE4
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001FDF
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_180_JP_08789CE4.bin" @ 4208 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_181_JP_0878AD64
DirectSoundWaveData_Cry_181_JP_0878AD64: @ 0x0878AD64
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001B30
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_181_JP_0878AD64.bin" @ 3592 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_182_JP_0878BB7C
DirectSoundWaveData_Cry_182_JP_0878BB7C: @ 0x0878BB7C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001938
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_182_JP_0878BB7C.bin" @ 3332 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_183_JP_0878C890
DirectSoundWaveData_Cry_183_JP_0878C890: @ 0x0878C890
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000020B1
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_183_JP_0878C890.bin" @ 4316 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_184_JP_0878D97C
DirectSoundWaveData_Cry_184_JP_0878D97C: @ 0x0878D97C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001F42
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_184_JP_0878D97C.bin" @ 4128 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_185_JP_0878E9AC
DirectSoundWaveData_Cry_185_JP_0878E9AC: @ 0x0878E9AC
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002347
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_185_JP_0878E9AC.bin" @ 4660 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_186_JP_0878FBF0
DirectSoundWaveData_Cry_186_JP_0878FBF0: @ 0x0878FBF0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001030
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_186_JP_0878FBF0.bin" @ 2140 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_187_JP_0879045C
DirectSoundWaveData_Cry_187_JP_0879045C: @ 0x0879045C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001922
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_187_JP_0879045C.bin" @ 3320 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_188_JP_08791164
DirectSoundWaveData_Cry_188_JP_08791164: @ 0x08791164
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001F57
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_188_JP_08791164.bin" @ 4140 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_189_JP_087921A0
DirectSoundWaveData_Cry_189_JP_087921A0: @ 0x087921A0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001B3F
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_189_JP_087921A0.bin" @ 3600 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_190_JP_08792FC0
DirectSoundWaveData_Cry_190_JP_08792FC0: @ 0x08792FC0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000F86
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_190_JP_08792FC0.bin" @ 2052 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_191_JP_087937D4
DirectSoundWaveData_Cry_191_JP_087937D4: @ 0x087937D4
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001EA5
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_191_JP_087937D4.bin" @ 4048 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_192_JP_087947B4
DirectSoundWaveData_Cry_192_JP_087947B4: @ 0x087947B4
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000020E7
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_192_JP_087947B4.bin" @ 4344 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_193_JP_087958BC
DirectSoundWaveData_Cry_193_JP_087958BC: @ 0x087958BC
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000E2C
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_193_JP_087958BC.bin" @ 1872 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_194_JP_0879601C
DirectSoundWaveData_Cry_194_JP_0879601C: @ 0x0879601C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000019C9
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_194_JP_0879601C.bin" @ 3408 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_195_JP_08796D7C
DirectSoundWaveData_Cry_195_JP_08796D7C: @ 0x08796D7C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002612
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_195_JP_08796D7C.bin" @ 5028 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_196_JP_08798130
DirectSoundWaveData_Cry_196_JP_08798130: @ 0x08798130
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001DF0
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_196_JP_08798130.bin" @ 3952 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_197_JP_087990B0
DirectSoundWaveData_Cry_197_JP_087990B0: @ 0x087990B0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000205F
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_197_JP_087990B0.bin" @ 4276 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_198_JP_0879A174
DirectSoundWaveData_Cry_198_JP_0879A174: @ 0x0879A174
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002E31
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_198_JP_0879A174.bin" @ 6100 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_199_JP_0879B958
DirectSoundWaveData_Cry_199_JP_0879B958: @ 0x0879B958
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001666
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_199_JP_0879B958.bin" @ 2960 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_200_JP_0879C4F8
DirectSoundWaveData_Cry_200_JP_0879C4F8: @ 0x0879C4F8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000195D
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_200_JP_0879C4F8.bin" @ 3352 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_201_JP_0879D220
DirectSoundWaveData_Cry_201_JP_0879D220: @ 0x0879D220
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000027D1
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_201_JP_0879D220.bin" @ 5260 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_202_JP_0879E6BC
DirectSoundWaveData_Cry_202_JP_0879E6BC: @ 0x0879E6BC
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001C60
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_202_JP_0879E6BC.bin" @ 3748 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_203_JP_0879F570
DirectSoundWaveData_Cry_203_JP_0879F570: @ 0x0879F570
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000019D0
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_203_JP_0879F570.bin" @ 3408 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_204_JP_087A02D0
DirectSoundWaveData_Cry_204_JP_087A02D0: @ 0x087A02D0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000026B4
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_204_JP_087A02D0.bin" @ 5112 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_205_JP_087A16D8
DirectSoundWaveData_Cry_205_JP_087A16D8: @ 0x087A16D8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001EA3
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_205_JP_087A16D8.bin" @ 4048 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_206_JP_087A26B8
DirectSoundWaveData_Cry_206_JP_087A26B8: @ 0x087A26B8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001761
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_206_JP_087A26B8.bin" @ 3088 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_207_JP_087A32D8
DirectSoundWaveData_Cry_207_JP_087A32D8: @ 0x087A32D8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000049DA
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_207_JP_087A32D8.bin" @ 9752 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_208_JP_087A5900
DirectSoundWaveData_Cry_208_JP_087A5900: @ 0x087A5900
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001BE2
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_208_JP_087A5900.bin" @ 3684 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_209_JP_087A6774
DirectSoundWaveData_Cry_209_JP_087A6774: @ 0x087A6774
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002DB3
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_209_JP_087A6774.bin" @ 6036 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_210_JP_087A7F18
DirectSoundWaveData_Cry_210_JP_087A7F18: @ 0x087A7F18
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000165E
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_210_JP_087A7F18.bin" @ 2956 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_211_JP_087A8AB4
DirectSoundWaveData_Cry_211_JP_087A8AB4: @ 0x087A8AB4
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002C73
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_211_JP_087A8AB4.bin" @ 5868 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_212_JP_087AA1B0
DirectSoundWaveData_Cry_212_JP_087AA1B0: @ 0x087AA1B0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000013A4
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_212_JP_087AA1B0.bin" @ 2596 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_213_JP_087AABE4
DirectSoundWaveData_Cry_213_JP_087AABE4: @ 0x087AABE4
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002365
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_213_JP_087AABE4.bin" @ 4676 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_214_JP_087ABE38
DirectSoundWaveData_Cry_214_JP_087ABE38: @ 0x087ABE38
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001197
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_214_JP_087ABE38.bin" @ 2324 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_215_JP_087AC75C
DirectSoundWaveData_Cry_215_JP_087AC75C: @ 0x087AC75C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001FF8
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_215_JP_087AC75C.bin" @ 4220 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_216_JP_087AD7E8
DirectSoundWaveData_Cry_216_JP_087AD7E8: @ 0x087AD7E8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000039BB
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_216_JP_087AD7E8.bin" @ 7624 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_217_JP_087AF5C0
DirectSoundWaveData_Cry_217_JP_087AF5C0: @ 0x087AF5C0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002106
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_217_JP_087AF5C0.bin" @ 4360 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_218_JP_087B06D8
DirectSoundWaveData_Cry_218_JP_087B06D8: @ 0x087B06D8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000028A3
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_218_JP_087B06D8.bin" @ 5368 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_219_JP_087B1BE0
DirectSoundWaveData_Cry_219_JP_087B1BE0: @ 0x087B1BE0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001866
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_219_JP_087B1BE0.bin" @ 3224 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_220_JP_087B2888
DirectSoundWaveData_Cry_220_JP_087B2888: @ 0x087B2888
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000018FE
	.incbin "build/audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_220_JP_087B2888.bin" @ 3300 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_221_JP_087B357C
DirectSoundWaveData_Cry_221_JP_087B357C: @ 0x087B357C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000018D5
	.incbin "audio/direct_sound/8088_rom_72_c0_d2_text/DirectSoundWaveData_Cry_221_JP_087B357C.bin" @ 2878 DirectSound sample bytes
