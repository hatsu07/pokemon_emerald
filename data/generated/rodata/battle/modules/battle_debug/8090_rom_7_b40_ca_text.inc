	@ src/battle_debug.c:440 battle_debug_line_440
	.globl gText_Rom_7B40CA
gText_Rom_7B40CA: @ 0x087B40CA
	.string "ぜんち$"
	.if (. - gText_Rom_7B40CA) > 0x4
	.error "gText_Rom_7B40CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_7B40CA) < 0x4
	.space 0x4 - (. - gText_Rom_7B40CA)
	.endif
	@ analyzed canonical ROM range 0x087B40CE-0x0881A06D
	@ pass3: M4A audio region; proven headers/tracks are labeled below
	.byte 0xFF, 0x2D, 0x22, 0xE1, 0xF1, 0x01, 0xF0, 0xE1, 0xF1, 0x11, 0x00, 0xF1, 0xFF, 0x10, 0xE2, 0x0E
	.byte 0x21, 0x0E, 0x11, 0xF1, 0x10, 0x10, 0x00, 0x00, 0x1F, 0x11, 0xFE, 0x2E, 0x21, 0xF1, 0x0F, 0x1F
	.byte 0xF2, 0xE1, 0x02, 0xE2, 0xF0, 0x00, 0xE0, 0x1F, 0x2F, 0xFF, 0x00, 0x21, 0xFE, 0x1D, 0x22, 0x2E
	.byte 0xE2, 0x11, 0xFF, 0x20, 0x1F, 0x1F, 0x01, 0x08, 0x0E, 0xD3, 0xE2, 0xF1, 0xFF, 0x1F, 0xF1, 0xF0
	.byte 0x2E, 0x01, 0x1F, 0x01, 0xFF, 0xFF, 0x10, 0x00, 0x0F, 0x1E, 0xE3, 0xFE, 0xF1, 0x11, 0x10, 0xF0
	.byte 0x1E, 0x02, 0xF1, 0xF1, 0xE1, 0xF2, 0xF1, 0x0E, 0xFD, 0x01, 0x0F, 0xF1, 0x11, 0x0F, 0x0E, 0x12
	.byte 0xFF, 0xE2, 0xE2, 0xF1, 0x10, 0x1F, 0xF2, 0xDF, 0x3E, 0x0F, 0x12, 0x00, 0xFF, 0x01, 0xE2, 0x10
	.byte 0x00, 0xFF, 0x2E, 0x2F, 0xF0, 0x11, 0x1F, 0x01, 0xFF, 0x02, 0x0F, 0x0F, 0x2F, 0xF1, 0xFE, 0x2F
	.byte 0x0F, 0x00, 0x11, 0x11, 0xFF, 0x11, 0xE1, 0x1E, 0x12, 0xF1, 0xF0, 0x2E, 0xF1, 0xE1, 0x11, 0x01
	.byte 0xF1, 0xF1, 0x11, 0xF1, 0xF1, 0xE1, 0x1F, 0x11, 0xE2, 0xFF, 0x05, 0x0F, 0xF0, 0xF0, 0x2E, 0x1F
	.byte 0xE0, 0x2E, 0x2E, 0x11, 0x0F, 0x0E, 0x12, 0x0F, 0xE2, 0xFF, 0x1F, 0x1F, 0x11, 0xFF, 0xF1, 0x1E
	.byte 0x11, 0xF2, 0x0E, 0x11, 0xE0, 0x21, 0x1E, 0x01, 0x11, 0xF1, 0xF1, 0xFF, 0x0F, 0x00, 0xE2, 0xFF
	.byte 0x10, 0xE1, 0x2F, 0x1E, 0x21, 0xFF, 0x01, 0x10, 0xF1, 0x0F, 0x11, 0xE2, 0xFE, 0x21, 0x11, 0xF2
	.byte 0xE1, 0xE1, 0x11, 0x1F, 0x2E, 0x10, 0xF0, 0x2F, 0xF0, 0x01, 0xFF, 0xFF, 0x04, 0x0F, 0xF2, 0x01
	.byte 0x0F, 0xF0, 0xEE, 0x11, 0x2E, 0x11, 0x21, 0xD2, 0x1F, 0x1F, 0x2F, 0x0E, 0x0F, 0x11, 0x10, 0xE2
	.byte 0x10, 0xF1, 0x0F, 0x1F, 0x01, 0xFF, 0x2E, 0xF1, 0x10, 0xF1, 0x0F, 0xFF, 0x0F, 0x00, 0x00, 0x00
	.byte 0x0F, 0xFF, 0x10, 0x01, 0x0F, 0xF1, 0xE1, 0x21, 0xFE, 0x2E, 0xF2, 0x01, 0xE1, 0x10, 0x1F, 0x1F
	.byte 0x1F, 0x01, 0x0F, 0xF1, 0xE2, 0x1F, 0xE2, 0x1F, 0xF1, 0x1F, 0xF1, 0x0F, 0x11, 0x1F, 0xFC, 0x01
	.byte 0x0F, 0x1F, 0xF1, 0x11, 0x01, 0x01, 0x00, 0xF1, 0xF1, 0x1F, 0x1F, 0x1F, 0x11, 0xFF, 0x00, 0x02
	.byte 0xF0, 0xE1, 0xF0, 0x20, 0x1E, 0x12, 0xE0, 0x10, 0x1F, 0xF1, 0x1F, 0x01, 0xFF, 0x11, 0x0F, 0x01
	.byte 0x0F, 0x01, 0x11, 0xE2, 0x0F, 0xF1, 0x1F, 0xF1, 0x10, 0x1E, 0x2E, 0x00, 0x2F, 0x0F, 0xE2, 0xF2
	.byte 0xE1, 0x10, 0x0F, 0xF2, 0xEF, 0x1F, 0x0F, 0x10, 0x00, 0x0F, 0x0F, 0x01, 0x00, 0x0F, 0x1F, 0xF1
	.byte 0xFE, 0x0F, 0x10, 0xF1, 0x10, 0xF0, 0x0F, 0x10, 0xF1, 0x00, 0xF1, 0xF1, 0xF0, 0xF1, 0xF1, 0x1F
	.byte 0x10, 0xF0, 0xF1, 0x1F, 0x00, 0x1F, 0x10, 0x1F, 0x1F, 0xF0, 0xF1, 0x00, 0x01, 0xF1, 0x1F, 0xF0
	.byte 0xE1, 0xFF, 0x01, 0xEF, 0x11, 0x10, 0xF1, 0x10, 0x11, 0xF0, 0x1F, 0xFF, 0x11, 0x00

	.globl DirectSoundWaveData_Cry_222_JP_087B425C
DirectSoundWaveData_Cry_222_JP_087B425C: @ 0x087B425C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001457
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_222_JP_087B425C.bin" @ 2688 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_223_JP_087B4CEC
DirectSoundWaveData_Cry_223_JP_087B4CEC: @ 0x087B4CEC
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000032CA
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_223_JP_087B4CEC.bin" @ 6708 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_224_JP_087B6730
DirectSoundWaveData_Cry_224_JP_087B6730: @ 0x087B6730
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001F4B
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_224_JP_087B6730.bin" @ 4132 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_225_JP_087B7764
DirectSoundWaveData_Cry_225_JP_087B7764: @ 0x087B7764
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001E7A
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_225_JP_087B7764.bin" @ 4024 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_226_JP_087B872C
DirectSoundWaveData_Cry_226_JP_087B872C: @ 0x087B872C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002E7C
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_226_JP_087B872C.bin" @ 6136 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_227_JP_087B9F34
DirectSoundWaveData_Cry_227_JP_087B9F34: @ 0x087B9F34
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000186A
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_227_JP_087B9F34.bin" @ 3224 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_228_JP_087BABDC
DirectSoundWaveData_Cry_228_JP_087BABDC: @ 0x087BABDC
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002609
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_228_JP_087BABDC.bin" @ 5024 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_229_JP_087BBF8C
DirectSoundWaveData_Cry_229_JP_087BBF8C: @ 0x087BBF8C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001AB8
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_229_JP_087BBF8C.bin" @ 3528 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_230_JP_087BCD64
DirectSoundWaveData_Cry_230_JP_087BCD64: @ 0x087BCD64
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000015CD
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_230_JP_087BCD64.bin" @ 2880 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_231_JP_087BD8B4
DirectSoundWaveData_Cry_231_JP_087BD8B4: @ 0x087BD8B4
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002117
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_231_JP_087BD8B4.bin" @ 4372 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_232_JP_087BE9D8
DirectSoundWaveData_Cry_232_JP_087BE9D8: @ 0x087BE9D8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001E5C
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_232_JP_087BE9D8.bin" @ 4008 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_233_JP_087BF990
DirectSoundWaveData_Cry_233_JP_087BF990: @ 0x087BF990
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002B75
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_233_JP_087BF990.bin" @ 5740 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_234_JP_087C100C
DirectSoundWaveData_Cry_234_JP_087C100C: @ 0x087C100C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000013A7
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_234_JP_087C100C.bin" @ 2596 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_235_JP_087C1A40
DirectSoundWaveData_Cry_235_JP_087C1A40: @ 0x087C1A40
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001F36
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_235_JP_087C1A40.bin" @ 4120 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_236_JP_087C2A68
DirectSoundWaveData_Cry_236_JP_087C2A68: @ 0x087C2A68
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001AC5
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_236_JP_087C2A68.bin" @ 3536 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_237_JP_087C3848
DirectSoundWaveData_Cry_237_JP_087C3848: @ 0x087C3848
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001692
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_237_JP_087C3848.bin" @ 2980 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_238_JP_087C43FC
DirectSoundWaveData_Cry_238_JP_087C43FC: @ 0x087C43FC
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001452
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_238_JP_087C43FC.bin" @ 2684 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_239_JP_087C4E88
DirectSoundWaveData_Cry_239_JP_087C4E88: @ 0x087C4E88
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001BE0
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_239_JP_087C4E88.bin" @ 3680 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_240_JP_087C5CF8
DirectSoundWaveData_Cry_240_JP_087C5CF8: @ 0x087C5CF8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001CAD
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_240_JP_087C5CF8.bin" @ 3788 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_241_JP_087C6BD4
DirectSoundWaveData_Cry_241_JP_087C6BD4: @ 0x087C6BD4
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002004
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_241_JP_087C6BD4.bin" @ 4228 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_242_JP_087C7C68
DirectSoundWaveData_Cry_242_JP_087C7C68: @ 0x087C7C68
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000021AD
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_242_JP_087C7C68.bin" @ 4448 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_243_JP_087C8DD8
DirectSoundWaveData_Cry_243_JP_087C8DD8: @ 0x087C8DD8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002783
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_243_JP_087C8DD8.bin" @ 5220 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_244_JP_087CA24C
DirectSoundWaveData_Cry_244_JP_087CA24C: @ 0x087CA24C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002354
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_244_JP_087CA24C.bin" @ 4664 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_245_JP_087CB494
DirectSoundWaveData_Cry_245_JP_087CB494: @ 0x087CB494
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000187B
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_245_JP_087CB494.bin" @ 3232 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_246_JP_087CC144
DirectSoundWaveData_Cry_246_JP_087CC144: @ 0x087CC144
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001038
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_246_JP_087CC144.bin" @ 2144 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_247_JP_087CC9B4
DirectSoundWaveData_Cry_247_JP_087CC9B4: @ 0x087CC9B4
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002D35
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_247_JP_087CC9B4.bin" @ 5968 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_248_JP_087CE114
DirectSoundWaveData_Cry_248_JP_087CE114: @ 0x087CE114
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00004981
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_248_JP_087CE114.bin" @ 9704 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_249_JP_087D070C
DirectSoundWaveData_Cry_249_JP_087D070C: @ 0x087D070C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002BAA
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_249_JP_087D070C.bin" @ 5764 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_250_JP_087D1DA0
DirectSoundWaveData_Cry_250_JP_087D1DA0: @ 0x087D1DA0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001BEB
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_250_JP_087D1DA0.bin" @ 3688 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_251_JP_087D2C18
DirectSoundWaveData_Cry_251_JP_087D2C18: @ 0x087D2C18
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001018
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_251_JP_087D2C18.bin" @ 2128 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_252_JP_087D3478
DirectSoundWaveData_Cry_252_JP_087D3478: @ 0x087D3478
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000014B3
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_252_JP_087D3478.bin" @ 2736 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_253_JP_087D3F38
DirectSoundWaveData_Cry_253_JP_087D3F38: @ 0x087D3F38
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000011E3
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_253_JP_087D3F38.bin" @ 2364 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_254_JP_087D4884
DirectSoundWaveData_Cry_254_JP_087D4884: @ 0x087D4884
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000017D7
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_254_JP_087D4884.bin" @ 3148 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_255_JP_087D54E0
DirectSoundWaveData_Cry_255_JP_087D54E0: @ 0x087D54E0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000028A9
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_255_JP_087D54E0.bin" @ 5368 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_256_JP_087D69E8
DirectSoundWaveData_Cry_256_JP_087D69E8: @ 0x087D69E8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000146B
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_256_JP_087D69E8.bin" @ 2696 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_257_JP_087D7480
DirectSoundWaveData_Cry_257_JP_087D7480: @ 0x087D7480
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000177F
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_257_JP_087D7480.bin" @ 3104 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_258_JP_087D80B0
DirectSoundWaveData_Cry_258_JP_087D80B0: @ 0x087D80B0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001AC2
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_258_JP_087D80B0.bin" @ 3536 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_259_JP_087D8E90
DirectSoundWaveData_Cry_259_JP_087D8E90: @ 0x087D8E90
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001669
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_259_JP_087D8E90.bin" @ 2960 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_260_JP_087D9A30
DirectSoundWaveData_Cry_260_JP_087D9A30: @ 0x087D9A30
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002C8E
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_260_JP_087D9A30.bin" @ 5884 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_261_JP_087DB13C
DirectSoundWaveData_Cry_261_JP_087DB13C: @ 0x087DB13C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001267
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_261_JP_087DB13C.bin" @ 2432 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_262_JP_087DBACC
DirectSoundWaveData_Cry_262_JP_087DBACC: @ 0x087DBACC
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000140A
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_262_JP_087DBACC.bin" @ 2648 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_263_JP_087DC534
DirectSoundWaveData_Cry_263_JP_087DC534: @ 0x087DC534
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000AB5
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_263_JP_087DC534.bin" @ 1416 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_264_JP_087DCACC
DirectSoundWaveData_Cry_264_JP_087DCACC: @ 0x087DCACC
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000156A
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_264_JP_087DCACC.bin" @ 2828 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_265_JP_087DD5E8
DirectSoundWaveData_Cry_265_JP_087DD5E8: @ 0x087DD5E8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000011F2
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_265_JP_087DD5E8.bin" @ 2372 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_266_JP_087DDF3C
DirectSoundWaveData_Cry_266_JP_087DDF3C: @ 0x087DDF3C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000B7E
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_266_JP_087DDF3C.bin" @ 1520 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_267_JP_087DE53C
DirectSoundWaveData_Cry_267_JP_087DE53C: @ 0x087DE53C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001159
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_267_JP_087DE53C.bin" @ 2292 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_268_JP_087DEE40
DirectSoundWaveData_Cry_268_JP_087DEE40: @ 0x087DEE40
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000222A
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_268_JP_087DEE40.bin" @ 4512 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_269_JP_087DFFF0
DirectSoundWaveData_Cry_269_JP_087DFFF0: @ 0x087DFFF0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000017F5
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_269_JP_087DFFF0.bin" @ 3164 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_270_JP_087E0C5C
DirectSoundWaveData_Cry_270_JP_087E0C5C: @ 0x087E0C5C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001296
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_270_JP_087E0C5C.bin" @ 2456 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_271_JP_087E1604
DirectSoundWaveData_Cry_271_JP_087E1604: @ 0x087E1604
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000037C5
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_271_JP_087E1604.bin" @ 7364 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_272_JP_087E32D8
DirectSoundWaveData_Cry_272_JP_087E32D8: @ 0x087E32D8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00003CF7
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_272_JP_087E32D8.bin" @ 8048 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_273_JP_087E5258
DirectSoundWaveData_Cry_273_JP_087E5258: @ 0x087E5258
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001679
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_273_JP_087E5258.bin" @ 2968 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_274_JP_087E5E00
DirectSoundWaveData_Cry_274_JP_087E5E00: @ 0x087E5E00
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002783
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_274_JP_087E5E00.bin" @ 5220 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_275_JP_087E7274
DirectSoundWaveData_Cry_275_JP_087E7274: @ 0x087E7274
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00003281
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_275_JP_087E7274.bin" @ 6668 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_276_JP_087E8C90
DirectSoundWaveData_Cry_276_JP_087E8C90: @ 0x087E8C90
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000E6D
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_276_JP_087E8C90.bin" @ 1908 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_277_JP_087E9414
DirectSoundWaveData_Cry_277_JP_087E9414: @ 0x087E9414
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000020DF
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_277_JP_087E9414.bin" @ 4340 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_278_JP_087EA518
DirectSoundWaveData_Cry_278_JP_087EA518: @ 0x087EA518
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002B82
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_278_JP_087EA518.bin" @ 5744 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_279_JP_087EBB98
DirectSoundWaveData_Cry_279_JP_087EBB98: @ 0x087EBB98
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000016B4
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_279_JP_087EBB98.bin" @ 3000 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_280_JP_087EC760
DirectSoundWaveData_Cry_280_JP_087EC760: @ 0x087EC760
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000017A1
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_280_JP_087EC760.bin" @ 3120 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_281_JP_087ED3A0
DirectSoundWaveData_Cry_281_JP_087ED3A0: @ 0x087ED3A0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000186B
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_281_JP_087ED3A0.bin" @ 3224 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_282_JP_087EE048
DirectSoundWaveData_Cry_282_JP_087EE048: @ 0x087EE048
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000FDD
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_282_JP_087EE048.bin" @ 2096 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_283_JP_087EE888
DirectSoundWaveData_Cry_283_JP_087EE888: @ 0x087EE888
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000865
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_283_JP_087EE888.bin" @ 1112 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_284_JP_087EECF0
DirectSoundWaveData_Cry_284_JP_087EECF0: @ 0x087EECF0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001C20
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_284_JP_087EECF0.bin" @ 3716 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_285_JP_087EFB84
DirectSoundWaveData_Cry_285_JP_087EFB84: @ 0x087EFB84
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000207B
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_285_JP_087EFB84.bin" @ 4288 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_286_JP_087F0C54
DirectSoundWaveData_Cry_286_JP_087F0C54: @ 0x087F0C54
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000FB8
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_286_JP_087F0C54.bin" @ 2076 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_287_JP_087F1480
DirectSoundWaveData_Cry_287_JP_087F1480: @ 0x087F1480
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000015FE
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_287_JP_087F1480.bin" @ 2904 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_288_JP_087F1FE8
DirectSoundWaveData_Cry_288_JP_087F1FE8: @ 0x087F1FE8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002632
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_288_JP_087F1FE8.bin" @ 5044 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_289_JP_087F33AC
DirectSoundWaveData_Cry_289_JP_087F33AC: @ 0x087F33AC
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001365
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_289_JP_087F33AC.bin" @ 2564 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_290_JP_087F3DC0
DirectSoundWaveData_Cry_290_JP_087F3DC0: @ 0x087F3DC0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000010EA
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_290_JP_087F3DC0.bin" @ 2236 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_291_JP_087F468C
DirectSoundWaveData_Cry_291_JP_087F468C: @ 0x087F468C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001F38
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_291_JP_087F468C.bin" @ 4124 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_292_JP_087F56B8
DirectSoundWaveData_Cry_292_JP_087F56B8: @ 0x087F56B8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000FCE
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_292_JP_087F56B8.bin" @ 2088 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_293_JP_087F5EF0
DirectSoundWaveData_Cry_293_JP_087F5EF0: @ 0x087F5EF0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001F6B
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_293_JP_087F5EF0.bin" @ 4148 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_294_JP_087F6F34
DirectSoundWaveData_Cry_294_JP_087F6F34: @ 0x087F6F34
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000186F
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_294_JP_087F6F34.bin" @ 3228 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_295_JP_087F7BE0
DirectSoundWaveData_Cry_295_JP_087F7BE0: @ 0x087F7BE0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001377
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_295_JP_087F7BE0.bin" @ 2572 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_296_JP_087F85FC
DirectSoundWaveData_Cry_296_JP_087F85FC: @ 0x087F85FC
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001782
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_296_JP_087F85FC.bin" @ 3104 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_297_JP_087F922C
DirectSoundWaveData_Cry_297_JP_087F922C: @ 0x087F922C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002F28
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_297_JP_087F922C.bin" @ 6228 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_298_JP_087FAA90
DirectSoundWaveData_Cry_298_JP_087FAA90: @ 0x087FAA90
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000105D
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_298_JP_087FAA90.bin" @ 2164 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_299_JP_087FB314
DirectSoundWaveData_Cry_299_JP_087FB314: @ 0x087FB314
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001BAE
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_299_JP_087FB314.bin" @ 3656 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_300_JP_087FC16C
DirectSoundWaveData_Cry_300_JP_087FC16C: @ 0x087FC16C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001317
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_300_JP_087FC16C.bin" @ 2524 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_301_JP_087FCB58
DirectSoundWaveData_Cry_301_JP_087FCB58: @ 0x087FCB58
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000C59
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_301_JP_087FCB58.bin" @ 1632 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_302_JP_087FD1C8
DirectSoundWaveData_Cry_302_JP_087FD1C8: @ 0x087FD1C8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001771
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_302_JP_087FD1C8.bin" @ 3096 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_303_JP_087FDDF0
DirectSoundWaveData_Cry_303_JP_087FDDF0: @ 0x087FDDF0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000ED2
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_303_JP_087FDDF0.bin" @ 1960 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_304_JP_087FE5A8
DirectSoundWaveData_Cry_304_JP_087FE5A8: @ 0x087FE5A8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000E25
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_304_JP_087FE5A8.bin" @ 1868 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_305_JP_087FED04
DirectSoundWaveData_Cry_305_JP_087FED04: @ 0x087FED04
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002049
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_305_JP_087FED04.bin" @ 4264 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_306_JP_087FFDBC
DirectSoundWaveData_Cry_306_JP_087FFDBC: @ 0x087FFDBC
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000019D5
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_306_JP_087FFDBC.bin" @ 3412 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_307_JP_08800B20
DirectSoundWaveData_Cry_307_JP_08800B20: @ 0x08800B20
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002861
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_307_JP_08800B20.bin" @ 5332 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_308_JP_08802004
DirectSoundWaveData_Cry_308_JP_08802004: @ 0x08802004
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001146
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_308_JP_08802004.bin" @ 2284 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_309_JP_08802900
DirectSoundWaveData_Cry_309_JP_08802900: @ 0x08802900
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001EF2
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_309_JP_08802900.bin" @ 4088 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_310_JP_08803908
DirectSoundWaveData_Cry_310_JP_08803908: @ 0x08803908
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001438
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_310_JP_08803908.bin" @ 2672 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_311_JP_08804388
DirectSoundWaveData_Cry_311_JP_08804388: @ 0x08804388
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002614
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_311_JP_08804388.bin" @ 5028 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_312_JP_0880573C
DirectSoundWaveData_Cry_312_JP_0880573C: @ 0x0880573C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000D96
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_312_JP_0880573C.bin" @ 1796 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_313_JP_08805E50
DirectSoundWaveData_Cry_313_JP_08805E50: @ 0x08805E50
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000028C3
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_313_JP_08805E50.bin" @ 5384 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_314_JP_08807368
DirectSoundWaveData_Cry_314_JP_08807368: @ 0x08807368
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000F69
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_314_JP_08807368.bin" @ 2036 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_315_JP_08807B6C
DirectSoundWaveData_Cry_315_JP_08807B6C: @ 0x08807B6C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002191
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_315_JP_08807B6C.bin" @ 4432 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_316_JP_08808CCC
DirectSoundWaveData_Cry_316_JP_08808CCC: @ 0x08808CCC
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000011E6
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_316_JP_08808CCC.bin" @ 2364 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_317_JP_08809618
DirectSoundWaveData_Cry_317_JP_08809618: @ 0x08809618
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002CB4
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_317_JP_08809618.bin" @ 5904 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_318_JP_0880AD38
DirectSoundWaveData_Cry_318_JP_0880AD38: @ 0x0880AD38
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000011C5
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_318_JP_0880AD38.bin" @ 2348 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_319_JP_0880B674
DirectSoundWaveData_Cry_319_JP_0880B674: @ 0x0880B674
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x000020CC
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_319_JP_0880B674.bin" @ 4332 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_320_JP_0880C770
DirectSoundWaveData_Cry_320_JP_0880C770: @ 0x0880C770
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001728
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_320_JP_0880C770.bin" @ 3060 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_321_JP_0880D374
DirectSoundWaveData_Cry_321_JP_0880D374: @ 0x0880D374
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002FCA
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_321_JP_0880D374.bin" @ 6312 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_322_JP_0880EC2C
DirectSoundWaveData_Cry_322_JP_0880EC2C: @ 0x0880EC2C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000DEE
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_322_JP_0880EC2C.bin" @ 1840 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_323_JP_0880F36C
DirectSoundWaveData_Cry_323_JP_0880F36C: @ 0x0880F36C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000185B
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_323_JP_0880F36C.bin" @ 3216 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_324_JP_0881000C
DirectSoundWaveData_Cry_324_JP_0881000C: @ 0x0881000C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001385
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_324_JP_0881000C.bin" @ 2580 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_325_JP_08810A30
DirectSoundWaveData_Cry_325_JP_08810A30: @ 0x08810A30
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001B08
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_325_JP_08810A30.bin" @ 3572 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_326_JP_08811834
DirectSoundWaveData_Cry_326_JP_08811834: @ 0x08811834
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x0000325C
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_326_JP_08811834.bin" @ 6648 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_327_JP_0881323C
DirectSoundWaveData_Cry_327_JP_0881323C: @ 0x0881323C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001136
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_327_JP_0881323C.bin" @ 2272 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_328_JP_08813B2C
DirectSoundWaveData_Cry_328_JP_08813B2C: @ 0x08813B2C
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002BDB
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_328_JP_08813B2C.bin" @ 5792 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_329_JP_088151DC
DirectSoundWaveData_Cry_329_JP_088151DC: @ 0x088151DC
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001825
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_329_JP_088151DC.bin" @ 3188 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_330_JP_08815E60
DirectSoundWaveData_Cry_330_JP_08815E60: @ 0x08815E60
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002572
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_330_JP_08815E60.bin" @ 4944 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_331_JP_088171C0
DirectSoundWaveData_Cry_331_JP_088171C0: @ 0x088171C0
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00002E62
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_331_JP_088171C0.bin" @ 6124 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_332_JP_088189BC
DirectSoundWaveData_Cry_332_JP_088189BC: @ 0x088189BC
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00001F3D
	.incbin "build/audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_332_JP_088189BC.bin" @ 4124 DirectSound sample bytes

	.globl DirectSoundWaveData_Cry_333_JP_088199E8
DirectSoundWaveData_Cry_333_JP_088199E8: @ 0x088199E8
	@ M4A DirectSound WaveData (cry)
	m4a_wave_data_header 0x00000001, 0x00A44000, 0x00000000, 0x00000F09
	.incbin "audio/direct_sound/8090_rom_7_b40_ca_text/DirectSoundWaveData_Cry_333_JP_088199E8.bin" @ 1654 DirectSound sample bytes
