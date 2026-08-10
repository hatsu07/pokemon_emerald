	.globl gUnknown_85FD7EC
gUnknown_85FD7EC: @ 0x085FD7EC
	.globl gXcmdTable
gXcmdTable:
	@ M4A extended-command dispatch table (14 entries)
	.4byte ply_xxx
	.4byte ply_xwave
	.4byte ply_xtype
	.4byte ply_xxx
	.4byte ply_xatta
	.4byte ply_xdeca
	.4byte ply_xsust
	.4byte ply_xrele
	.4byte ply_xiecv
	.4byte ply_xiecl
	.4byte ply_xleng
	.4byte ply_xswee
	.4byte ply_xcmd_0C
	.4byte ply_xcmd_0D
VoiceGroup_JP_085FD824: @ 0x085FD824
	voice_keysplit_all 0x085FDB0C @ 0x085FD824
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x085FD830
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD83C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD848
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD854
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD860
	voice_square_2 2, 0, 0, 9, 2 @ 0x085FD86C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD878
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD884
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_000_JP_0863D428, 255, 165, 51, 235 @ 0x085FD890
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD89C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD8A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD8B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD8C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD8CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD8D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD8E4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 127 @ 0x085FD8F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD8FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD908
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD914
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD920
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD92C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD938
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD944
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD950
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD95C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD968
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD974
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD980
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD98C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD998
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 149 @ 0x085FD9A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD9B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD9BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD9C8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_003_JP_0863EE90, 255, 235, 128, 115 @ 0x085FD9D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD9E0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 115 @ 0x085FD9EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FD9F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDA04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDA10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDA1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDA28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDA34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDA40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDA4C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 204, 193, 239 @ 0x085FDA58
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x085FDA64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDA70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDA7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDA88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDA94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDAA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDAAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDAB8
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x085FDAC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDAD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDADC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDAE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDAF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDB00
VoiceGroup_JP_085FDB0C: @ 0x085FDB0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDB0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDB18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDB24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDB30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDB3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDB48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDB54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDB60
	voice_square_1 0, 2, 0, 1, 6, 0 @ 0x085FDB6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDB78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDB84
	voice_programmable_wave 0x0863C0EC, 0, 7, 15, 1 @ 0x085FDB90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDB9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDBA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDBB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDBC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDBCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDBD8
	voice_square_2 2, 0, 1, 6, 0 @ 0x085FDBE4
	voice_programmable_wave 0x0863C10C, 0, 7, 15, 1 @ 0x085FDBF0
	voice_square_1 0, 2, 0, 1, 6, 0 @ 0x085FDBFC
	voice_square_2 3, 0, 1, 6, 0 @ 0x085FDC08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDC14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDC20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDC2C
	voice_square_1 0, 0, 0, 1, 6, 0 @ 0x085FDC38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDC44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDC50
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_006_JP_08641F0C, 255, 0, 255, 0 @ 0x085FDC5C
VoiceGroup_JP_085FDC68: @ 0x085FDC68
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_007_JP_086435BC, 255, 165, 154, 127 @ 0x085FDC68
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_008_JP_08644900, 255, 165, 154, 127 @ 0x085FDC74
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_009_JP_086453A4, 255, 165, 206, 127 @ 0x085FDC80
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_010_JP_086466B8, 255, 165, 206, 127 @ 0x085FDC8C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_011_JP_08649CB4, 255, 0, 255, 0 @ 0x085FDC98
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_012_JP_0864A18C, 255, 0, 255, 0 @ 0x085FDCA4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_013_JP_0864BA68, 255, 0, 255, 0 @ 0x085FDCB0
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_Instrument_014_JP_0864CD90, 255, 0, 255, 242 @ 0x085FDCBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDCC8
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_Instrument_015_JP_0864D230, 255, 0, 255, 242 @ 0x085FDCD4
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_Instrument_016_JP_0864D924, 255, 255, 255, 127 @ 0x085FDCE0
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_Instrument_017_JP_0864E1B4, 255, 0, 255, 242 @ 0x085FDCEC
	voice_directsound 48, 44, DirectSoundWaveData_Instrument_018_JP_0864EA2C, 255, 210, 77, 204 @ 0x085FDCF8
	voice_directsound_no_resample 60, 79, DirectSoundWaveData_Instrument_019_JP_0864FA6C, 255, 127, 0, 188 @ 0x085FDD04
	voice_directsound 51, 54, DirectSoundWaveData_Instrument_018_JP_0864EA2C, 255, 216, 77, 204 @ 0x085FDD10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDD1C
	voice_directsound 54, 64, DirectSoundWaveData_Instrument_018_JP_0864EA2C, 255, 216, 77, 204 @ 0x085FDD28
	voice_directsound_no_resample 60, 79, DirectSoundWaveData_Instrument_020_JP_0864FE80, 255, 242, 141, 0 @ 0x085FDD34
	voice_directsound 57, 69, DirectSoundWaveData_Instrument_018_JP_0864EA2C, 255, 210, 77, 204 @ 0x085FDD40
	voice_directsound 60, 79, DirectSoundWaveData_Instrument_018_JP_0864EA2C, 255, 204, 77, 204 @ 0x085FDD4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDD58
	voice_directsound 62, 84, DirectSoundWaveData_Instrument_018_JP_0864EA2C, 255, 204, 77, 204 @ 0x085FDD64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDD70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDD7C
	voice_directsound_no_resample 70, 49, DirectSoundWaveData_Instrument_021_JP_08650CB0, 255, 165, 103, 231 @ 0x085FDD88
	voice_directsound_no_resample 32, 34, DirectSoundWaveData_Instrument_022_JP_08651C44, 255, 127, 77, 204 @ 0x085FDD94
	voice_directsound_no_resample 60, 14, DirectSoundWaveData_Instrument_023_JP_086524F8, 255, 235, 0, 165 @ 0x085FDDA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDDAC
	voice_directsound_no_resample 30, 54, DirectSoundWaveData_Instrument_024_JP_08652DDC, 255, 246, 0, 216 @ 0x085FDDB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDDC4
	voice_directsound_no_resample 30, 54, DirectSoundWaveData_Instrument_024_JP_08652DDC, 255, 246, 0, 216 @ 0x085FDDD0
	voice_directsound_no_resample 30, 64, DirectSoundWaveData_Instrument_024_JP_08652DDC, 8, 0, 255, 216 @ 0x085FDDDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDDE8
	voice_directsound_no_resample 72, 104, DirectSoundWaveData_Instrument_025_JP_08653D08, 255, 0, 255, 0 @ 0x085FDDF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDE00
	voice_directsound_no_resample 72, 94, DirectSoundWaveData_Instrument_026_JP_08654220, 255, 0, 255, 0 @ 0x085FDE0C
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_Instrument_027_JP_086547E8, 255, 0, 255, 0 @ 0x085FDE18
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_Instrument_028_JP_08655700, 255, 180, 175, 228 @ 0x085FDE24
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_Instrument_028_JP_08655700, 255, 0, 255, 242 @ 0x085FDE30
	voice_directsound_no_resample 64, 54, DirectSoundWaveData_Instrument_016_JP_0864D924, 255, 255, 255, 127 @ 0x085FDE3C
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_Instrument_017_JP_0864E1B4, 255, 0, 255, 242 @ 0x085FDE48
	voice_directsound 64, 24, DirectSoundWaveData_Instrument_029_JP_08657074, 255, 0, 255, 226 @ 0x085FDE54
	voice_directsound_no_resample 64, 80, DirectSoundWaveData_Instrument_017_JP_0864E1B4, 255, 0, 255, 242 @ 0x085FDE60
	voice_directsound 68, 34, DirectSoundWaveData_Instrument_029_JP_08657074, 255, 0, 255, 226 @ 0x085FDE6C
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_Instrument_015_JP_0864D230, 255, 0, 255, 242 @ 0x085FDE78
	voice_directsound 72, 44, DirectSoundWaveData_Instrument_029_JP_08657074, 255, 0, 255, 226 @ 0x085FDE84
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_Instrument_015_JP_0864D230, 255, 0, 255, 242 @ 0x085FDE90
	voice_directsound 76, 84, DirectSoundWaveData_Instrument_029_JP_08657074, 255, 0, 255, 226 @ 0x085FDE9C
	voice_directsound 80, 94, DirectSoundWaveData_Instrument_029_JP_08657074, 255, 0, 255, 226 @ 0x085FDEA8
	voice_directsound_no_resample 33, 89, DirectSoundWaveData_Instrument_024_JP_08652DDC, 255, 235, 0, 231 @ 0x085FDEB4
	voice_directsound 84, 104, DirectSoundWaveData_Instrument_029_JP_08657074, 255, 0, 255, 235 @ 0x085FDEC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDECC
	voice_directsound 63, 64, DirectSoundWaveData_Instrument_024_JP_08652DDC, 255, 235, 0, 231 @ 0x085FDED8
	voice_directsound_no_resample 64, 24, DirectSoundWaveData_Instrument_030_JP_08659150, 255, 165, 103, 231 @ 0x085FDEE4
VoiceGroup_JP_085FDEF0: @ 0x085FDEF0
	voice_directsound_no_resample 64, 34, DirectSoundWaveData_Instrument_022_JP_08651C44, 255, 127, 77, 204 @ 0x085FDEF0
	voice_directsound_no_resample 64, 14, DirectSoundWaveData_Instrument_023_JP_086524F8, 255, 231, 0, 188 @ 0x085FDEFC
	voice_directsound_no_resample 64, 89, DirectSoundWaveData_Instrument_031_JP_08660980, 255, 0, 255, 242 @ 0x085FDF08
	voice_directsound_no_resample 64, 29, DirectSoundWaveData_Instrument_024_JP_08652DDC, 255, 235, 0, 231 @ 0x085FDF14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDF20
	voice_directsound_no_resample 64, 54, DirectSoundWaveData_Instrument_024_JP_08652DDC, 255, 235, 0, 231 @ 0x085FDF2C
	voice_directsound_no_resample 64, 54, DirectSoundWaveData_Instrument_024_JP_08652DDC, 8, 0, 255, 216 @ 0x085FDF38
	voice_directsound_no_resample 64, 94, DirectSoundWaveData_Instrument_032_JP_08661338, 255, 0, 255, 0 @ 0x085FDF44
	voice_directsound_no_resample 64, 34, DirectSoundWaveData_Instrument_025_JP_08653D08, 255, 0, 255, 0 @ 0x085FDF50
	voice_directsound_no_resample 64, 34, DirectSoundWaveData_Instrument_026_JP_08654220, 255, 0, 255, 0 @ 0x085FDF5C
	voice_directsound_no_resample 64, 90, DirectSoundWaveData_Instrument_026_JP_08654220, 255, 0, 255, 0 @ 0x085FDF68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDF74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDF80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDF8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDF98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDFA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDFB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDFBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDFC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDFD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDFE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDFEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FDFF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE004
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE010
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE01C
	voice_directsound_no_resample 64, 39, DirectSoundWaveData_Instrument_033_JP_086621B8, 255, 242, 103, 188 @ 0x085FE028
	voice_directsound_no_resample 64, 79, DirectSoundWaveData_Instrument_033_JP_086621B8, 255, 242, 103, 188 @ 0x085FE034
	voice_directsound_no_resample 64, 39, DirectSoundWaveData_Instrument_033_JP_086621B8, 255, 165, 103, 188 @ 0x085FE040
	voice_directsound_no_resample 64, 24, DirectSoundWaveData_Instrument_034_JP_0866302C, 255, 0, 255, 0 @ 0x085FE04C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE058
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE064
	voice_directsound_no_resample 64, 104, DirectSoundWaveData_Instrument_035_JP_08664840, 255, 0, 255, 0 @ 0x085FE070
	voice_directsound 63, 64, DirectSoundWaveData_Instrument_036_JP_08665DE4, 255, 0, 255, 0 @ 0x085FE07C
	voice_directsound 50, 84, DirectSoundWaveData_Instrument_037_JP_086673C8, 255, 0, 255, 0 @ 0x085FE088
	voice_directsound 64, 84, DirectSoundWaveData_Instrument_037_JP_086673C8, 255, 0, 255, 0 @ 0x085FE094
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_Instrument_036_JP_08665DE4, 255, 0, 255, 0 @ 0x085FE0A0
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_Instrument_028_JP_08655700, 255, 180, 175, 228 @ 0x085FE0AC
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_Instrument_028_JP_08655700, 255, 0, 255, 242 @ 0x085FE0B8
	voice_directsound_no_resample 64, 54, DirectSoundWaveData_Instrument_016_JP_0864D924, 255, 255, 255, 127 @ 0x085FE0C4
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_Instrument_017_JP_0864E1B4, 255, 0, 255, 242 @ 0x085FE0D0
	voice_directsound 64, 24, DirectSoundWaveData_Instrument_029_JP_08657074, 255, 0, 255, 226 @ 0x085FE0DC
	voice_directsound_no_resample 64, 80, DirectSoundWaveData_Instrument_017_JP_0864E1B4, 255, 0, 255, 242 @ 0x085FE0E8
	voice_directsound 68, 34, DirectSoundWaveData_Instrument_029_JP_08657074, 255, 0, 255, 226 @ 0x085FE0F4
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_Instrument_015_JP_0864D230, 255, 0, 255, 242 @ 0x085FE100
	voice_directsound 72, 44, DirectSoundWaveData_Instrument_029_JP_08657074, 255, 0, 255, 226 @ 0x085FE10C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE118
	voice_directsound 76, 84, DirectSoundWaveData_Instrument_029_JP_08657074, 255, 0, 255, 226 @ 0x085FE124
	voice_directsound 80, 94, DirectSoundWaveData_Instrument_029_JP_08657074, 255, 0, 255, 226 @ 0x085FE130
	voice_directsound_no_resample 33, 89, DirectSoundWaveData_Instrument_024_JP_08652DDC, 255, 235, 0, 231 @ 0x085FE13C
	voice_directsound 64, 104, DirectSoundWaveData_Instrument_036_JP_08665DE4, 255, 0, 255, 235 @ 0x085FE148
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE154
	voice_directsound 63, 64, DirectSoundWaveData_Instrument_024_JP_08652DDC, 255, 235, 0, 231 @ 0x085FE160
	voice_directsound_no_resample 64, 24, DirectSoundWaveData_Instrument_030_JP_08659150, 255, 165, 103, 231 @ 0x085FE16C
VoiceGroup_JP_085FE178: @ 0x085FE178
	voice_directsound_no_resample 66, 34, DirectSoundWaveData_Instrument_022_JP_08651C44, 255, 127, 77, 204 @ 0x085FE178
	voice_directsound_no_resample 64, 14, DirectSoundWaveData_Instrument_023_JP_086524F8, 255, 231, 0, 188 @ 0x085FE184
	voice_directsound_no_resample 64, 89, DirectSoundWaveData_Instrument_031_JP_08660980, 255, 0, 255, 242 @ 0x085FE190
	voice_directsound_no_resample 64, 29, DirectSoundWaveData_Instrument_024_JP_08652DDC, 255, 235, 0, 231 @ 0x085FE19C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE1A8
	voice_directsound_no_resample 64, 54, DirectSoundWaveData_Instrument_024_JP_08652DDC, 255, 235, 0, 231 @ 0x085FE1B4
	voice_directsound_no_resample 64, 54, DirectSoundWaveData_Instrument_024_JP_08652DDC, 8, 0, 255, 216 @ 0x085FE1C0
	voice_directsound_no_resample 64, 94, DirectSoundWaveData_Instrument_032_JP_08661338, 255, 0, 255, 0 @ 0x085FE1CC
	voice_directsound_no_resample 64, 34, DirectSoundWaveData_Instrument_025_JP_08653D08, 255, 0, 255, 0 @ 0x085FE1D8
	voice_directsound_no_resample 64, 34, DirectSoundWaveData_Instrument_026_JP_08654220, 255, 0, 255, 0 @ 0x085FE1E4
	voice_directsound_no_resample 64, 90, DirectSoundWaveData_Instrument_026_JP_08654220, 255, 0, 255, 0 @ 0x085FE1F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE1FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE208
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE214
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE220
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE22C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE238
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE244
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE250
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE25C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE268
	voice_directsound_no_resample 61, 84, DirectSoundWaveData_Instrument_013_JP_0864BA68, 255, 0, 255, 0 @ 0x085FE274
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_Instrument_012_JP_0864A18C, 255, 0, 255, 0 @ 0x085FE280
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE28C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE298
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE2A4
	voice_directsound_no_resample 64, 39, DirectSoundWaveData_Instrument_033_JP_086621B8, 255, 242, 103, 188 @ 0x085FE2B0
	voice_directsound_no_resample 64, 79, DirectSoundWaveData_Instrument_033_JP_086621B8, 255, 242, 103, 188 @ 0x085FE2BC
	voice_directsound_no_resample 64, 39, DirectSoundWaveData_Instrument_033_JP_086621B8, 255, 165, 103, 188 @ 0x085FE2C8
	voice_directsound_no_resample 64, 24, DirectSoundWaveData_Instrument_034_JP_0866302C, 255, 0, 255, 0 @ 0x085FE2D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE2E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE2EC
	voice_directsound_no_resample 64, 104, DirectSoundWaveData_Instrument_035_JP_08664840, 255, 0, 255, 0 @ 0x085FE2F8
	voice_directsound 63, 64, DirectSoundWaveData_Instrument_036_JP_08665DE4, 255, 0, 255, 0 @ 0x085FE304
	voice_directsound 50, 84, DirectSoundWaveData_Instrument_037_JP_086673C8, 255, 0, 255, 0 @ 0x085FE310
	voice_directsound 64, 84, DirectSoundWaveData_Instrument_037_JP_086673C8, 255, 0, 255, 0 @ 0x085FE31C
	voice_directsound 62, 64, DirectSoundWaveData_Instrument_027_JP_086547E8, 255, 0, 255, 0 @ 0x085FE328
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_Instrument_028_JP_08655700, 255, 180, 175, 228 @ 0x085FE334
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_Instrument_028_JP_08655700, 255, 0, 255, 242 @ 0x085FE340
	voice_directsound_no_resample 64, 54, DirectSoundWaveData_Instrument_016_JP_0864D924, 255, 255, 255, 127 @ 0x085FE34C
	voice_directsound 65, 64, DirectSoundWaveData_Instrument_017_JP_0864E1B4, 255, 0, 255, 242 @ 0x085FE358
	voice_directsound 64, 24, DirectSoundWaveData_Instrument_029_JP_08657074, 255, 0, 255, 226 @ 0x085FE364
	voice_directsound_no_resample 64, 80, DirectSoundWaveData_Instrument_017_JP_0864E1B4, 255, 0, 255, 242 @ 0x085FE370
	voice_directsound 68, 34, DirectSoundWaveData_Instrument_029_JP_08657074, 255, 0, 255, 226 @ 0x085FE37C
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_Instrument_015_JP_0864D230, 255, 0, 255, 242 @ 0x085FE388
	voice_directsound 72, 44, DirectSoundWaveData_Instrument_029_JP_08657074, 255, 0, 255, 226 @ 0x085FE394
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE3A0
	voice_directsound 76, 84, DirectSoundWaveData_Instrument_029_JP_08657074, 255, 0, 255, 226 @ 0x085FE3AC
	voice_directsound 80, 94, DirectSoundWaveData_Instrument_029_JP_08657074, 255, 0, 255, 226 @ 0x085FE3B8
	voice_directsound 56, 89, DirectSoundWaveData_Instrument_024_JP_08652DDC, 255, 235, 0, 231 @ 0x085FE3C4
	voice_directsound 64, 104, DirectSoundWaveData_Instrument_036_JP_08665DE4, 255, 0, 255, 235 @ 0x085FE3D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE3DC
	voice_directsound 63, 64, DirectSoundWaveData_Instrument_024_JP_08652DDC, 255, 235, 0, 231 @ 0x085FE3E8
	voice_directsound_no_resample 64, 24, DirectSoundWaveData_Instrument_030_JP_08659150, 255, 165, 103, 231 @ 0x085FE3F4
	voice_directsound_no_resample 66, 34, DirectSoundWaveData_Instrument_022_JP_08651C44, 255, 127, 77, 204 @ 0x085FE400
	voice_directsound 64, 14, DirectSoundWaveData_Instrument_023_JP_086524F8, 255, 231, 0, 188 @ 0x085FE40C
	voice_directsound 64, 89, DirectSoundWaveData_Instrument_031_JP_08660980, 255, 0, 255, 242 @ 0x085FE418
	voice_directsound 60, 29, DirectSoundWaveData_Instrument_024_JP_08652DDC, 255, 235, 0, 231 @ 0x085FE424
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE430
	voice_directsound 58, 54, DirectSoundWaveData_Instrument_024_JP_08652DDC, 255, 235, 0, 231 @ 0x085FE43C
	voice_directsound 62, 54, DirectSoundWaveData_Instrument_024_JP_08652DDC, 8, 0, 255, 216 @ 0x085FE448
	voice_directsound 64, 94, DirectSoundWaveData_Instrument_032_JP_08661338, 255, 0, 255, 0 @ 0x085FE454
	voice_directsound 64, 34, DirectSoundWaveData_Instrument_025_JP_08653D08, 255, 0, 255, 0 @ 0x085FE460
	voice_directsound 64, 34, DirectSoundWaveData_Instrument_026_JP_08654220, 255, 0, 255, 0 @ 0x085FE46C
	voice_directsound 64, 90, DirectSoundWaveData_Instrument_026_JP_08654220, 255, 0, 255, 0 @ 0x085FE478
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE484
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE490
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE49C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE4A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE4B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE4C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE4CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE4D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE4E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE4F0
	voice_directsound 61, 84, DirectSoundWaveData_Instrument_013_JP_0864BA68, 255, 0, 255, 0 @ 0x085FE4FC
	voice_directsound 64, 64, DirectSoundWaveData_Instrument_012_JP_0864A18C, 255, 0, 255, 0 @ 0x085FE508
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE514
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE520
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE52C
	voice_directsound 64, 39, DirectSoundWaveData_Instrument_033_JP_086621B8, 255, 242, 103, 188 @ 0x085FE538
	voice_directsound 64, 79, DirectSoundWaveData_Instrument_033_JP_086621B8, 255, 242, 103, 188 @ 0x085FE544
	voice_directsound 64, 39, DirectSoundWaveData_Instrument_033_JP_086621B8, 255, 165, 103, 188 @ 0x085FE550
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_Instrument_034_JP_0866302C, 255, 0, 255, 0 @ 0x085FE55C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE568
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE574
	voice_directsound 64, 104, DirectSoundWaveData_Instrument_035_JP_08664840, 255, 0, 255, 0 @ 0x085FE580
	voice_directsound 63, 64, DirectSoundWaveData_Instrument_036_JP_08665DE4, 255, 0, 255, 0 @ 0x085FE58C
	voice_directsound 50, 84, DirectSoundWaveData_Instrument_037_JP_086673C8, 255, 0, 255, 0 @ 0x085FE598
	voice_directsound 64, 84, DirectSoundWaveData_Instrument_037_JP_086673C8, 255, 0, 255, 0 @ 0x085FE5A4
VoiceGroup_JP_085FE5B0: @ 0x085FE5B0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_038_JP_086684BC, 255, 252, 0, 239 @ 0x085FE5B0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_039_JP_0866941C, 255, 250, 0, 221 @ 0x085FE5BC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_040_JP_0866AA7C, 255, 250, 0, 221 @ 0x085FE5C8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_041_JP_0866BFD8, 255, 247, 0, 221 @ 0x085FE5D4
VoiceGroup_JP_085FE5E0: @ 0x085FE5E0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_042_JP_0866CB64, 255, 0, 255, 196 @ 0x085FE5E0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_043_JP_08670108, 255, 0, 255, 196 @ 0x085FE5EC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_044_JP_08672424, 255, 0, 255, 196 @ 0x085FE5F8
VoiceGroup_JP_085FE604: @ 0x085FE604
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_045_JP_08675AF0, 255, 0, 193, 127 @ 0x085FE604
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_046_JP_08676E40, 255, 0, 193, 127 @ 0x085FE610
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_047_JP_08678350, 255, 0, 193, 127 @ 0x085FE61C
	voice_square_1_alt 38, 2, 1, 0, 0, 0 @ 0x085FE628
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE634
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE640
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE64C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE658
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE664
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE670
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE67C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE688
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE694
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE6A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE6AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE6B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE6C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE6D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE6DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE6E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE6F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE700
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE70C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE718
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE724
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE730
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE73C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE748
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE754
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE760
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE76C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE778
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE784
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE790
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE79C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE7A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE7B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE7C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE7CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE7D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE7E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE7F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE7FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE808
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE814
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE820
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE82C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE838
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE844
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE850
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE85C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE868
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE874
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE880
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE88C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE898
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE8A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE8B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE8BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE8C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE8D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE8E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE8EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE8F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE904
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE910
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE91C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE928
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE934
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE940
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE94C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE958
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE964
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE970
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE97C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE988
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE994
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE9A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE9AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE9B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE9C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE9D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE9DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE9E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FE9F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEA00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEA0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEA18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEA24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEA30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEA3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEA48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEA54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEA60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEA6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEA78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEA84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEA90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEA9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEAA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEAB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEAC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEACC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEAD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEAE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEAF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEAFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEB08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEB14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEB20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEB2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEB38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEB44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEB50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEB5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEB68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEB74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEB80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEB8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEB98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEBA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEBB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEBBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEBC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEBD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEBE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEBEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEBF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEC04
	voice_square_1_alt 36, 2, 0, 1, 4, 2 @ 0x085FEC10
	voice_square_1_alt 21, 2, 0, 0, 15, 2 @ 0x085FEC1C
VoiceGroup_JP_085FEC28: @ 0x085FEC28
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_048_JP_08679770, 255, 0, 255, 165 @ 0x085FEC28
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_049_JP_0867A80C, 255, 0, 255, 165 @ 0x085FEC34
VoiceGroup_JP_085FEC40: @ 0x085FEC40
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_050_JP_0867B868, 255, 0, 224, 165 @ 0x085FEC40
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_051_JP_086827FC, 255, 0, 218, 165 @ 0x085FEC4C
VoiceGroup_JP_085FEC58: @ 0x085FEC58
	voice_keysplit_all 0x08604358 @ 0x085FEC58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEC64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEC70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEC7C
	voice_square_2 3, 0, 4, 0, 1 @ 0x085FEC88
	voice_square_1 0, 3, 0, 4, 0, 1 @ 0x085FEC94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FECA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FECAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FECB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FECC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FECD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FECDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FECE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FECF4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 216, 90, 242 @ 0x085FED00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FED0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FED18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FED24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FED30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FED3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FED48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FED54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FED60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FED6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FED78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FED84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FED90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FED9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEDA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEDB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEDC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEDCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEDD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEDE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEDF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEDFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEE08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEE14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEE20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEE2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEE38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEE44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEE50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEE5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEE68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEE74
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 0, 204 @ 0x085FEE80
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 246, 0, 226 @ 0x085FEE8C
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x085FEE98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEEA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEEB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEEBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEEC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEED4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEEE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEEEC
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x085FEEF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEF04
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x085FEF10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEF1C
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x085FEF28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEF34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEF40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEF4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEF58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEF64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEF70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEF7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEF88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEF94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEFA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEFAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEFB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEFC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEFD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEFDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEFE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FEFF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF000
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF00C
	voice_square_2 3, 0, 1, 7, 1 @ 0x085FF018
	voice_programmable_wave_alt 0x0863C14C, 0, 7, 15, 2 @ 0x085FF024
	voice_square_1 0, 3, 0, 1, 7, 1 @ 0x085FF030
	voice_square_1 0, 3, 0, 0, 7, 1 @ 0x085FF03C
VoiceGroup_JP_085FF048: @ 0x085FF048
	voice_keysplit_all 0x08601F58 @ 0x085FF048
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF054
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF060
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF06C
	voice_square_1_alt 0, 3, 0, 2, 4, 0 @ 0x085FF078
	voice_square_2_alt 3, 0, 2, 4, 0 @ 0x085FF084
	voice_square_2_alt 2, 0, 3, 0, 0 @ 0x085FF090
	voice_square_2_alt 2, 0, 3, 0, 0 @ 0x085FF09C
	voice_square_1_alt 0, 2, 0, 3, 0, 0 @ 0x085FF0A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF0B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF0C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF0CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF0D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF0E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF0F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF0FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF108
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF114
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF120
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF12C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF138
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF144
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF150
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF15C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 149 @ 0x085FF168
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF174
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF180
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF18C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF198
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF1A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF1B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF1BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF1C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF1D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF1E0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 149 @ 0x085FF1EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF1F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF204
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF210
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF21C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF228
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF234
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF240
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF24C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF258
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF264
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF270
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF27C
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x085FF288
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF294
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF2A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF2AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF2B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF2C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF2D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF2DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF2E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF2F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF300
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF30C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF318
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF324
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF330
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF33C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF348
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF354
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF360
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF36C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF378
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF384
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF390
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF39C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF3A8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 127, 231, 127 @ 0x085FF3B4
	voice_programmable_wave_alt 0x0863C0EC, 0, 7, 15, 1 @ 0x085FF3C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF3CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF3D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF3E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF3F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF3FC
	voice_square_2_alt 2, 1, 1, 7, 1 @ 0x085FF408
	voice_square_1_alt 0, 2, 1, 1, 7, 1 @ 0x085FF414
	voice_square_1_alt 0, 2, 0, 0, 7, 1 @ 0x085FF420
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF42C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF438
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF444
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF450
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF45C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF468
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF474
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF480
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF48C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF498
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF4A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF4B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF4BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF4C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF4D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF4E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF4EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF4F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF504
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF510
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF51C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF528
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF534
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF540
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF54C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF558
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF564
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF570
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF57C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF588
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF594
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF5A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF5AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF5B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF5C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF5D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF5DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF5E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF5F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF600
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF60C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF618
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF624
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF630
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x085FF63C
VoiceGroup_JP_085FF648: @ 0x085FF648
	voice_keysplit_all 0x085FDB0C @ 0x085FF648
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x085FF654
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_080_JP_086B99E0, 255, 178, 180, 165 @ 0x085FF660
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF66C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF678
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF684
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF690
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF69C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF6A8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_000_JP_0863D428, 255, 165, 51, 235 @ 0x085FF6B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF6C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF6CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF6D8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_087_JP_086C59C8, 255, 235, 0, 204 @ 0x085FF6E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF6F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF6FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF708
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF714
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF720
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF72C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF738
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF744
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF750
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF75C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF768
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF774
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF780
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF78C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF798
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF7A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF7B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF7BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF7C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF7D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF7E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF7EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF7F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF804
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 115 @ 0x085FF810
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF81C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF828
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF834
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF840
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF84C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF858
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF864
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 0, 204 @ 0x085FF870
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 246, 0, 226 @ 0x085FF87C
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x085FF888
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF894
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF8A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF8AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF8B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF8C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF8D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF8DC
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x085FF8E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF8F4
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x085FF900
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF90C
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x085FF918
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF924
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF930
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF93C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF948
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF954
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF960
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF96C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF978
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF984
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF990
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF99C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF9A8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 127, 231, 127 @ 0x085FF9B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF9C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF9CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF9D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF9E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF9F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FF9FC
	voice_square_2_alt 2, 0, 1, 7, 1 @ 0x085FFA08
	voice_square_1_alt 0, 2, 0, 1, 7, 1 @ 0x085FFA14
	voice_square_2_alt 3, 0, 1, 7, 1 @ 0x085FFA20
	voice_square_1_alt 0, 3, 0, 1, 7, 1 @ 0x085FFA2C
	voice_square_2_alt 2, 0, 1, 4, 1 @ 0x085FFA38
	voice_square_1_alt 0, 2, 0, 1, 4, 1 @ 0x085FFA44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFA50
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 2 @ 0x085FFA5C
	voice_programmable_wave_alt 0x0863C14C, 0, 7, 15, 2 @ 0x085FFA68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFA74
	voice_square_2 2, 0, 1, 4, 1 @ 0x085FFA80
	voice_square_1 0, 2, 0, 1, 4, 1 @ 0x085FFA8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFA98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFAA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFAB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFABC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFAC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFAD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFAE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFAEC
	voice_square_1_alt 29, 2, 0, 2, 0, 0 @ 0x085FFAF8
	voice_square_1_alt 22, 2, 0, 2, 0, 0 @ 0x085FFB04
VoiceGroup_JP_085FFB10: @ 0x085FFB10
	voice_keysplit_all 0x085FDB0C @ 0x085FFB10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFB1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFB28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFB34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFB40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFB4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFB58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFB64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFB70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFB7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFB88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFB94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFBA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFBAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFBB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFBC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFBD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFBDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFBE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFBF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFC00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFC0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFC18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFC24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFC30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFC3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFC48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFC54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFC60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFC6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFC78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFC84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFC90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFC9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFCA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFCB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFCC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFCCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFCD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFCE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFCF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFCFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFD08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFD14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFD20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFD2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFD38
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 246, 0, 226 @ 0x085FFD44
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x085FFD50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFD5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFD68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFD74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFD80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFD8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFD98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFDA4
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x085FFDB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFDBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFDC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFDD4
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x085FFDE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFDEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFDF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFE04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFE10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFE1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFE28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFE34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFE40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFE4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFE58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFE64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFE70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFE7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFE88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFE94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFEA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFEAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFEB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFEC4
	voice_square_2_alt 1, 0, 1, 7, 1 @ 0x085FFED0
	voice_square_1_alt 0, 1, 0, 1, 7, 1 @ 0x085FFEDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFEE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFEF4
	voice_square_2_alt 3, 0, 1, 7, 1 @ 0x085FFF00
	voice_square_1_alt 0, 3, 0, 1, 7, 1 @ 0x085FFF0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFF18
	voice_programmable_wave_alt 0x0863C14C, 0, 7, 15, 1 @ 0x085FFF24
	voice_square_1_alt 0, 1, 0, 0, 7, 1 @ 0x085FFF30
	voice_square_1_alt 0, 3, 0, 0, 7, 1 @ 0x085FFF3C
VoiceGroup_JP_085FFF48: @ 0x085FFF48
	voice_keysplit_all 0x085FDB0C @ 0x085FFF48
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x085FFF54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFF60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFF6C
	voice_square_2_alt 3, 0, 1, 6, 1 @ 0x085FFF78
	voice_square_1_alt 0, 3, 0, 1, 6, 1 @ 0x085FFF84
	voice_square_2_alt 2, 0, 1, 6, 1 @ 0x085FFF90
	voice_square_1_alt 0, 2, 0, 1, 6, 1 @ 0x085FFF9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFFA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFFB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFFC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFFCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFFD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFFE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFFF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x085FFFFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600008
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600014
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600020
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860002C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600038
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600044
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600050
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860005C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 149 @ 0x08600068
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600074
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600080
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860008C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600098
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086000A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086000B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086000BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086000C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086000D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086000E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086000EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086000F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600104
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600110
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860011C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600128
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600134
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600140
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860014C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600158
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600164
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 246, 0, 235 @ 0x08600170
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 246, 0, 226 @ 0x0860017C
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08600188
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600194
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086001A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086001AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086001B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086001C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086001D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086001DC
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x086001E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086001F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600200
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860020C
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08600218
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600224
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600230
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860023C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600248
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600254
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600260
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860026C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600278
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600284
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600290
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860029C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086002A8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 127, 231, 127 @ 0x086002B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086002C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086002CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086002D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086002E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086002F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086002FC
	voice_square_2_alt 3, 0, 1, 7, 1 @ 0x08600308
	voice_programmable_wave_alt 0x0863C14C, 0, 7, 15, 1 @ 0x08600314
	voice_square_1_alt 0, 3, 0, 1, 7, 1 @ 0x08600320
	voice_programmable_wave_alt 0x0863C14C, 0, 7, 15, 0 @ 0x0860032C
	voice_square_1_alt 0, 3, 0, 0, 7, 0 @ 0x08600338
VoiceGroup_JP_08600344: @ 0x08600344
	voice_keysplit_all 0x08600794 @ 0x08600344
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x08600350
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860035C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600368
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600374
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600380
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860038C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600398
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086003A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086003B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086003BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086003C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086003D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086003E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086003EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086003F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600404
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600410
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860041C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600428
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600434
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600440
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860044C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600458
	voice_square_2 3, 0, 2, 0, 0 @ 0x08600464
	voice_square_1 0, 3, 0, 2, 0, 0 @ 0x08600470
	voice_square_2 3, 0, 6, 0, 0 @ 0x0860047C
	voice_square_1 0, 3, 0, 6, 0, 0 @ 0x08600488
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600494
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086004A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086004AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086004B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086004C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086004D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086004DC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 149 @ 0x086004E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086004F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600500
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860050C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600518
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600524
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600530
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860053C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600548
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600554
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600560
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860056C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600578
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08600584
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600590
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860059C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086005A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086005B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086005C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086005CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086005D8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_090_JP_086C8804, 255, 0, 255, 165 @ 0x086005E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086005F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086005FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600608
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600614
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600620
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860062C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600638
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600644
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600650
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860065C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600668
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600674
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600680
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860068C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600698
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086006A4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 127, 231, 127 @ 0x086006B0
	voice_programmable_wave 0x0863C0EC, 0, 7, 15, 1 @ 0x086006BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086006C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086006D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086006E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086006EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086006F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600704
	voice_programmable_wave_alt 0x0863C10C, 0, 7, 15, 2 @ 0x08600710
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860071C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600728
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600734
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600740
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860074C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600758
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600764
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600770
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860077C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600788
VoiceGroup_JP_08600794: @ 0x08600794
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600794
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086007A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086007AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086007B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086007C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086007D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086007DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086007E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086007F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600800
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860080C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600818
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600824
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600830
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860083C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600848
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600854
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600860
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860086C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600878
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600884
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600890
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860089C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086008A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086008B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086008C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086008CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086008D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086008E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086008F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086008FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600908
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600914
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600920
	voice_noise_alt 0, 0, 2, 0, 2 @ 0x0860092C
	voice_noise_alt 0, 0, 1, 0, 1 @ 0x08600938
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_Instrument_014_JP_0864CD90, 255, 0, 255, 242 @ 0x08600944
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600950
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_Instrument_015_JP_0864D230, 255, 0, 255, 242 @ 0x0860095C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600968
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_Instrument_017_JP_0864E1B4, 255, 0, 255, 242 @ 0x08600974
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600980
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860098C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600998
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086009A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086009B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086009BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086009C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086009D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086009E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086009EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086009F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600A04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600A10
	voice_directsound_no_resample 32, 74, DirectSoundWaveData_Instrument_022_JP_08651C44, 255, 127, 77, 204 @ 0x08600A1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600A28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600A34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600A40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600A4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600A58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600A64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600A70
	voice_directsound_no_resample 72, 66, DirectSoundWaveData_Instrument_025_JP_08653D08, 255, 0, 255, 0 @ 0x08600A7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600A88
	voice_directsound_no_resample 72, 62, DirectSoundWaveData_Instrument_026_JP_08654220, 255, 0, 255, 0 @ 0x08600A94
VoiceGroup_JP_08600AA0: @ 0x08600AA0
	voice_keysplit_all 0x085FDB0C @ 0x08600AA0
	voice_square_2_alt 2, 0, 3, 3, 1 @ 0x08600AAC
	voice_square_1_alt 0, 2, 0, 3, 3, 1 @ 0x08600AB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600AC4
	voice_square_2_alt 2, 0, 1, 7, 2 @ 0x08600AD0
	voice_square_1_alt 0, 2, 0, 1, 7, 2 @ 0x08600ADC
	voice_square_2_alt 2, 1, 1, 0, 0 @ 0x08600AE8
	voice_square_1_alt 0, 2, 1, 1, 0, 0 @ 0x08600AF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600B00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600B0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600B18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600B24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600B30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600B3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600B48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600B54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600B60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600B6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600B78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600B84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600B90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600B9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600BA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600BB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600BC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600BCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600BD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600BE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600BF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600BFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600C08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600C14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600C20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600C2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600C38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600C44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600C50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600C5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600C68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600C74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600C80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600C8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600C98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600CA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600CB0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 216, 0, 165 @ 0x08600CBC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 0, 204 @ 0x08600CC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600CD4
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08600CE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600CEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600CF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600D04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600D10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600D1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600D28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600D34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600D40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600D4C
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x08600D58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600D64
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08600D70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600D7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600D88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600D94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600DA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600DAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600DB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600DC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600DD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600DDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600DE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600DF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600E00
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 127, 231, 127 @ 0x08600E0C
	voice_programmable_wave 0x0863C0EC, 0, 7, 15, 0 @ 0x08600E18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600E24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600E30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600E3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600E48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600E54
	voice_square_2_alt 2, 1, 1, 7, 2 @ 0x08600E60
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 2 @ 0x08600E6C
	voice_square_1_alt 0, 2, 1, 1, 7, 2 @ 0x08600E78
	voice_square_2_alt 3, 1, 1, 7, 2 @ 0x08600E84
	voice_square_1_alt 0, 3, 1, 1, 7, 2 @ 0x08600E90
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 3 @ 0x08600E9C
	voice_square_1_alt 0, 2, 0, 0, 7, 2 @ 0x08600EA8
	voice_square_1_alt 0, 3, 0, 0, 7, 2 @ 0x08600EB4
	voice_square_2_alt 1, 1, 2, 6, 2 @ 0x08600EC0
	voice_square_1_alt 0, 1, 1, 2, 6, 2 @ 0x08600ECC
	voice_square_1_alt 0, 1, 0, 0, 6, 2 @ 0x08600ED8
VoiceGroup_JP_08600EE4: @ 0x08600EE4
	voice_keysplit_all 0x085FDB0C @ 0x08600EE4
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x08600EF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600EFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600F08
	voice_square_2_alt 0, 0, 1, 7, 1 @ 0x08600F14
	voice_square_1_alt 0, 0, 0, 1, 7, 1 @ 0x08600F20
	voice_square_1_alt 0, 0, 0, 0, 7, 1 @ 0x08600F2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600F38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600F44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600F50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600F5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600F68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600F74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600F80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600F8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600F98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600FA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600FB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600FBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600FC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600FD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600FE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600FEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08600FF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601004
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601010
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860101C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601028
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601034
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601040
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860104C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601058
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601064
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601070
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860107C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601088
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601094
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086010A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086010AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086010B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086010C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086010D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086010DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086010E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086010F4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 216, 0, 165 @ 0x08601100
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860110C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601118
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08601124
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601130
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860113C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601148
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601154
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601160
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860116C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601178
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601184
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601190
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860119C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086011A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086011B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086011C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086011CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086011D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086011E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086011F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086011FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601208
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601214
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601220
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860122C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601238
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601244
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 127, 231, 127 @ 0x08601250
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860125C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601268
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601274
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601280
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860128C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601298
	voice_square_2_alt 2, 0, 1, 7, 1 @ 0x086012A4
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 2 @ 0x086012B0
	voice_square_1_alt 0, 2, 0, 1, 7, 1 @ 0x086012BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086012C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086012D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086012E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086012EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086012F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601304
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601310
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860131C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601328
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601334
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601340
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860134C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601358
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601364
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601370
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860137C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601388
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601394
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086013A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086013AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086013B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086013C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086013D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086013DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086013E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086013F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601400
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860140C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601418
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601424
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601430
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860143C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601448
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601454
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601460
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860146C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601478
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601484
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601490
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860149C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086014A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086014B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086014C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086014CC
	voice_noise_alt 1, 0, 1, 0, 3 @ 0x086014D8
VoiceGroup_JP_086014E4: @ 0x086014E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086014E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086014F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086014FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601508
	voice_square_2_alt 1, 0, 1, 7, 1 @ 0x08601514
	voice_square_1_alt 0, 1, 0, 1, 7, 1 @ 0x08601520
	voice_square_2_alt 2, 0, 2, 6, 1 @ 0x0860152C
	voice_square_1_alt 0, 2, 0, 2, 6, 1 @ 0x08601538
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601544
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601550
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860155C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601568
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601574
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601580
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860158C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601598
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086015A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086015B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086015BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086015C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086015D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086015E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086015EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086015F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601604
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601610
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860161C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601628
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601634
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601640
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860164C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601658
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601664
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601670
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860167C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601688
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601694
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086016A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086016AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086016B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086016C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086016D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086016DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086016E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086016F4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 216, 0, 165 @ 0x08601700
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860170C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601718
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08601724
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601730
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860173C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601748
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601754
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601760
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860176C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601778
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601784
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601790
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x0860179C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086017A8
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x086017B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086017C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086017CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086017D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086017E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086017F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086017FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601808
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601814
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601820
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860182C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601838
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601844
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 127, 231, 127 @ 0x08601850
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860185C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601868
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601874
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601880
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860188C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601898
	voice_square_2_alt 2, 0, 1, 7, 1 @ 0x086018A4
	voice_programmable_wave_alt 0x0863C12C, 0, 7, 15, 2 @ 0x086018B0
	voice_square_1_alt 0, 2, 0, 1, 7, 1 @ 0x086018BC
	voice_square_1_alt 0, 2, 0, 0, 7, 1 @ 0x086018C8
	voice_square_1_alt 0, 1, 0, 0, 7, 1 @ 0x086018D4
VoiceGroup_JP_086018E0: @ 0x086018E0
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x086018E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086018EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086018F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601904
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601910
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860191C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601928
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601934
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601940
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860194C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601958
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601964
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601970
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860197C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601988
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601994
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086019A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086019AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086019B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086019C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086019D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086019DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086019E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086019F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601A00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601A0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601A18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601A24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601A30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601A3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601A48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601A54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601A60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601A6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601A78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601A84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601A90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601A9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601AA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601AB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601AC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601ACC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601AD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601AE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601AF0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 216, 0, 165 @ 0x08601AFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601B08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601B14
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08601B20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601B2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601B38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601B44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601B50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601B5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601B68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601B74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601B80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601B8C
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x08601B98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601BA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601BB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601BBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601BC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601BD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601BE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601BEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601BF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601C04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601C10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601C1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601C28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601C34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601C40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601C4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601C58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601C64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601C70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601C7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601C88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601C94
	voice_square_2 2, 0, 1, 7, 1 @ 0x08601CA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601CAC
	voice_square_1 0, 2, 0, 1, 7, 1 @ 0x08601CB8
	voice_square_2_alt 1, 0, 1, 6, 2 @ 0x08601CC4
	voice_square_1_alt 0, 1, 0, 1, 6, 2 @ 0x08601CD0
	voice_square_1_alt 0, 1, 0, 0, 6, 2 @ 0x08601CDC
	voice_square_1 0, 2, 0, 0, 7, 1 @ 0x08601CE8
VoiceGroup_JP_08601CF4: @ 0x08601CF4
	voice_keysplit_all 0x085FDB0C @ 0x08601CF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601D00
	voice_square_2_alt 3, 0, 2, 0, 0 @ 0x08601D0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601D18
	voice_square_2_alt 3, 0, 1, 6, 0 @ 0x08601D24
	voice_square_1_alt 0, 3, 0, 1, 6, 0 @ 0x08601D30
	voice_square_1_alt 0, 3, 0, 0, 6, 0 @ 0x08601D3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601D48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601D54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601D60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601D6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601D78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601D84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601D90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601D9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601DA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601DB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601DC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601DCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601DD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601DE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601DF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601DFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601E08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601E14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601E20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601E2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601E38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601E44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601E50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601E5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601E68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601E74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601E80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601E8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601E98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601EA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601EB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601EBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601EC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601ED4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601EE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601EEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601EF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601F04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601F10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601F1C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 246, 0, 226 @ 0x08601F28
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08601F34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601F40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601F4C
VoiceGroup_JP_08601F58: @ 0x08601F58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601F58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601F64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601F70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601F7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601F88
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08601F94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601FA0
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x08601FAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601FB8
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08601FC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601FD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601FDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601FE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08601FF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602000
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860200C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602018
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602024
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602030
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860203C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602048
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602054
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 127, 231, 127 @ 0x08602060
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860206C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602078
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602084
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602090
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860209C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086020A8
	voice_square_2_alt 0, 0, 1, 7, 0 @ 0x086020B4
	voice_programmable_wave_alt 0x0863C14C, 0, 7, 15, 1 @ 0x086020C0
	voice_square_1_alt 0, 0, 0, 1, 7, 0 @ 0x086020CC
	voice_programmable_wave_alt 0x0863C14C, 0, 7, 15, 0 @ 0x086020D8
	voice_programmable_wave_alt 0x0863C12C, 0, 7, 15, 0 @ 0x086020E4
	voice_programmable_wave_alt 0x0863C12C, 0, 7, 15, 1 @ 0x086020F0
	voice_square_1_alt 0, 0, 0, 0, 7, 0 @ 0x086020FC
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_Instrument_014_JP_0864CD90, 255, 0, 255, 242 @ 0x08602108
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602114
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_Instrument_015_JP_0864D230, 255, 0, 255, 242 @ 0x08602120
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860212C
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_Instrument_017_JP_0864E1B4, 255, 0, 255, 242 @ 0x08602138
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602144
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602150
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860215C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602168
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602174
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602180
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860218C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602198
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086021A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086021B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086021BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086021C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086021D4
	voice_directsound_no_resample 32, 34, DirectSoundWaveData_Instrument_022_JP_08651C44, 255, 127, 77, 204 @ 0x086021E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086021EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086021F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602204
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602210
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860221C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602228
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602234
	voice_directsound_no_resample 72, 67, DirectSoundWaveData_Instrument_025_JP_08653D08, 255, 0, 255, 0 @ 0x08602240
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860224C
	voice_directsound_no_resample 72, 61, DirectSoundWaveData_Instrument_026_JP_08654220, 255, 0, 255, 0 @ 0x08602258
VoiceGroup_JP_08602264: @ 0x08602264
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x08602264
	voice_keysplit_all 0x085FDB0C @ 0x08602270
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860227C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602288
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602294
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086022A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086022AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086022B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086022C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086022D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086022DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086022E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086022F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602300
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860230C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602318
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602324
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602330
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860233C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602348
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602354
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602360
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860236C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602378
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602384
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602390
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860239C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086023A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086023B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086023C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086023CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086023D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086023E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086023F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086023FC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 149 @ 0x08602408
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602414
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602420
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860242C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602438
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602444
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602450
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860245C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602468
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602474
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602480
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 246, 0, 235 @ 0x0860248C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602498
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x086024A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086024B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086024BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086024C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086024D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086024E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086024EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086024F8
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08602504
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602510
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860251C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602528
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602534
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602540
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860254C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602558
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602564
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602570
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860257C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602588
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602594
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086025A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086025AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086025B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086025C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086025D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086025DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086025E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086025F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602600
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860260C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602618
	voice_square_2_alt 2, 0, 1, 7, 0 @ 0x08602624
	voice_programmable_wave_alt 0x0863C14C, 0, 7, 15, 1 @ 0x08602630
	voice_square_1_alt 0, 2, 0, 1, 7, 0 @ 0x0860263C
	voice_square_2_alt 2, 0, 1, 6, 1 @ 0x08602648
	voice_square_1_alt 0, 2, 0, 1, 6, 1 @ 0x08602654
	voice_square_2_alt 3, 0, 1, 7, 0 @ 0x08602660
	voice_square_1_alt 0, 3, 0, 1, 7, 0 @ 0x0860266C
	voice_square_1_alt 0, 2, 0, 0, 7, 0 @ 0x08602678
	voice_square_1_alt 0, 3, 0, 0, 7, 0 @ 0x08602684
VoiceGroup_JP_08602690: @ 0x08602690
	voice_keysplit_all 0x085FDB0C @ 0x08602690
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860269C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086026A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086026B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086026C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086026CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086026D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086026E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086026F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086026FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602708
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602714
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602720
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860272C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602738
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602744
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602750
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860275C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602768
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602774
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602780
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860278C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602798
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086027A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086027B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086027BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086027C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086027D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086027E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086027EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086027F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602804
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602810
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860281C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602828
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602834
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602840
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860284C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602858
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602864
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602870
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860287C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602888
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602894
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086028A0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 216, 0, 165 @ 0x086028AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086028B8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 246, 0, 226 @ 0x086028C4
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x086028D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086028DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086028E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086028F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602900
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860290C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602918
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602924
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08602930
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860293C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602948
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602954
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08602960
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860296C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602978
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602984
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602990
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860299C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086029A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086029B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086029C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086029CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086029D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086029E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086029F0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 127, 231, 127 @ 0x086029FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602A08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602A14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602A20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602A2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602A38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602A44
	voice_square_2_alt 2, 0, 1, 7, 0 @ 0x08602A50
	voice_programmable_wave_alt 0x0863C14C, 0, 7, 15, 1 @ 0x08602A5C
	voice_square_1_alt 0, 2, 0, 1, 7, 0 @ 0x08602A68
	voice_square_2_alt 2, 0, 2, 0, 0 @ 0x08602A74
	voice_square_2_alt 3, 0, 1, 7, 0 @ 0x08602A80
	voice_square_1_alt 0, 3, 0, 1, 7, 0 @ 0x08602A8C
	voice_square_1_alt 0, 2, 0, 2, 0, 0 @ 0x08602A98
	voice_square_1_alt 0, 3, 0, 0, 7, 0 @ 0x08602AA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602AB0
	voice_programmable_wave_alt 0x0863C14C, 0, 7, 15, 0 @ 0x08602ABC
	voice_programmable_wave_alt 0x0863C14C, 0, 7, 15, 1 @ 0x08602AC8
VoiceGroup_JP_08602AD4: @ 0x08602AD4
	voice_keysplit_all 0x085FDB0C @ 0x08602AD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602AE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602AEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602AF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602B04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602B10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602B1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602B28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602B34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602B40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602B4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602B58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602B64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602B70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602B7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602B88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602B94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602BA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602BAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602BB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602BC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602BD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602BDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602BE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602BF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602C00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602C0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602C18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602C24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602C30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602C3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602C48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602C54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602C60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602C6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602C78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602C84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602C90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602C9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602CA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602CB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602CC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602CCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602CD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602CE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602CF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602CFC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 246, 0, 226 @ 0x08602D08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602D14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602D20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602D2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602D38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602D44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602D50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602D5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602D68
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08602D74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602D80
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x08602D8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602D98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602DA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602DB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602DBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602DC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602DD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602DE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602DEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602DF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602E04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602E10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602E1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602E28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602E34
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 127, 231, 127 @ 0x08602E40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602E4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602E58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602E64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602E70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602E7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602E88
	voice_square_2_alt 1, 0, 1, 7, 1 @ 0x08602E94
	voice_programmable_wave_alt 0x0863C0EC, 0, 7, 15, 1 @ 0x08602EA0
	voice_square_1_alt 0, 1, 0, 1, 7, 1 @ 0x08602EAC
	voice_square_2_alt 2, 0, 1, 0, 0 @ 0x08602EB8
VoiceGroup_JP_08602EC4: @ 0x08602EC4
	voice_keysplit_all 0x085FDB0C @ 0x08602EC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602ED0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602EDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602EE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602EF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602F00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602F0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602F18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602F24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602F30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602F3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602F48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602F54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602F60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602F6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602F78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602F84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602F90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602F9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602FA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602FB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602FC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602FCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602FD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602FE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602FF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08602FFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603008
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603014
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603020
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860302C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603038
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603044
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603050
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860305C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603068
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603074
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603080
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860308C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603098
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086030A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086030B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086030BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086030C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086030D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086030E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086030EC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 246, 0, 226 @ 0x086030F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603104
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603110
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860311C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603128
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603134
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603140
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860314C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603158
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603164
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603170
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860317C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603188
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08603194
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086031A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086031AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086031B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086031C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086031D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086031DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086031E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086031F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603200
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860320C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603218
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603224
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603230
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860323C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603248
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603254
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603260
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860326C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603278
	voice_square_2_alt 2, 0, 1, 9, 0 @ 0x08603284
	voice_programmable_wave_alt 0x0863C14C, 0, 7, 15, 0 @ 0x08603290
	voice_square_1_alt 0, 2, 0, 1, 9, 0 @ 0x0860329C
	voice_square_2_alt 3, 0, 1, 7, 0 @ 0x086032A8
	voice_square_1_alt 0, 3, 0, 1, 7, 0 @ 0x086032B4
VoiceGroup_JP_086032C0: @ 0x086032C0
	voice_keysplit_all 0x085FDB0C @ 0x086032C0
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x086032CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086032D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086032E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086032F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086032FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603308
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603314
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603320
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860332C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603338
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603344
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603350
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_087_JP_086C59C8, 255, 235, 0, 204 @ 0x0860335C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603368
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603374
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603380
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860338C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603398
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086033A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086033B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086033BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086033C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086033D4
	voice_square_2 1, 0, 2, 0, 0 @ 0x086033E0
	voice_square_1 0, 1, 0, 2, 0, 0 @ 0x086033EC
	voice_square_2 1, 0, 6, 0, 0 @ 0x086033F8
	voice_square_1 0, 1, 0, 6, 0, 0 @ 0x08603404
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603410
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860341C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603428
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603434
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603440
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860344C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603458
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603464
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603470
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860347C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 115 @ 0x08603488
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603494
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086034A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086034AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086034B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086034C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086034D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086034DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086034E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086034F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603500
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860350C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603518
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603524
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603530
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860353C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603548
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603554
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603560
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860356C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603578
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603584
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603590
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860359C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086035A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086035B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086035C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086035CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086035D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086035E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086035F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086035FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603608
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603614
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603620
	voice_programmable_wave 0x0863C0EC, 0, 7, 15, 0 @ 0x0860362C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603638
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603644
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603650
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860365C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603668
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603674
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603680
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 0 @ 0x0860368C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603698
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086036A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086036B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086036BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086036C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086036D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086036E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086036EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086036F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603704
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603710
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860371C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603728
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603734
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603740
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860374C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603758
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603764
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603770
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860377C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603788
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603794
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086037A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086037AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086037B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086037C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086037D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086037DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086037E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086037F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603800
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860380C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603818
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603824
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603830
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860383C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603848
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603854
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603860
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860386C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603878
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603884
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603890
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860389C
	voice_noise_alt 0, 0, 4, 1, 4 @ 0x086038A8
	voice_noise_alt 0, 0, 1, 0, 2 @ 0x086038B4
VoiceGroup_JP_086038C0: @ 0x086038C0
	voice_keysplit_all 0x085FDB0C @ 0x086038C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086038CC
	voice_square_1 0, 3, 0, 1, 0, 0 @ 0x086038D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086038E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086038F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086038FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603908
	voice_square_2 0, 0, 2, 0, 0 @ 0x08603914
	voice_square_1 0, 0, 0, 2, 0, 0 @ 0x08603920
	voice_square_2 0, 0, 6, 0, 0 @ 0x0860392C
	voice_square_1 0, 0, 0, 6, 0, 0 @ 0x08603938
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603944
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603950
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860395C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603968
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603974
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603980
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 127 @ 0x0860398C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603998
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086039A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086039B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086039BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086039C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086039D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086039E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086039EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086039F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603A04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603A10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603A1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603A28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603A34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603A40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603A4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603A58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603A64
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_003_JP_0863EE90, 255, 235, 128, 99 @ 0x08603A70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603A7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603A88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603A94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603AA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603AAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603AB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603AC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603AD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603ADC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603AE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603AF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603B00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603B0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603B18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603B24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603B30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603B3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603B48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603B54
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08603B60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603B6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603B78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603B84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603B90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603B9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603BA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603BB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603BC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603BCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603BD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603BE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603BF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603BFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603C08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603C14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603C20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603C2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603C38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603C44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603C50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603C5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603C68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603C74
	voice_square_2 2, 0, 2, 0, 0 @ 0x08603C80
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 0 @ 0x08603C8C
	voice_square_2 3, 0, 4, 0, 0 @ 0x08603C98
VoiceGroup_JP_08603CA4: @ 0x08603CA4
	voice_keysplit_all 0x085FDB0C @ 0x08603CA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603CB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603CBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603CC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603CD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603CE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603CEC
	voice_square_2_alt 1, 0, 2, 4, 0 @ 0x08603CF8
	voice_square_1_alt 0, 1, 0, 2, 7, 0 @ 0x08603D04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603D10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603D1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603D28
	voice_square_2_alt 2, 0, 2, 0, 0 @ 0x08603D34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603D40
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 216, 90, 242 @ 0x08603D4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603D58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603D64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603D70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603D7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603D88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603D94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603DA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603DAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603DB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603DC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603DD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603DDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603DE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603DF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603E00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603E0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603E18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603E24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603E30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603E3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603E48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603E54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603E60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603E6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603E78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603E84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603E90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603E9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603EA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603EB4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 216, 0, 165 @ 0x08603EC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603ECC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 246, 0, 226 @ 0x08603ED8
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08603EE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603EF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603EFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603F08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603F14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603F20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603F2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603F38
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08603F44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603F50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603F5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603F68
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08603F74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603F80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603F8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603F98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603FA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603FB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603FBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603FC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603FD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603FE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603FEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08603FF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604004
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 127, 231, 127 @ 0x08604010
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860401C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604028
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604034
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604040
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860404C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604058
	voice_square_2_alt 3, 0, 1, 7, 0 @ 0x08604064
	voice_programmable_wave_alt 0x0863C14C, 0, 7, 15, 1 @ 0x08604070
	voice_square_1_alt 0, 3, 0, 1, 7, 0 @ 0x0860407C
	voice_square_2_alt 3, 0, 1, 0, 0 @ 0x08604088
	voice_square_1_alt 0, 3, 0, 1, 0, 0 @ 0x08604094
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086040A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086040AC
	voice_square_1_alt 0, 0, 0, 1, 7, 0 @ 0x086040B8
VoiceGroup_JP_086040C4: @ 0x086040C4
	voice_keysplit_all 0x08604358 @ 0x086040C4
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x086040D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086040DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086040E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086040F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604100
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860410C
	voice_square_2_alt 3, 0, 2, 4, 0 @ 0x08604118
	voice_square_1_alt 0, 3, 0, 2, 4, 0 @ 0x08604124
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604130
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860413C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604148
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604154
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604160
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 216, 90, 242 @ 0x0860416C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604178
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604184
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 37, 165, 180, 127 @ 0x08604190
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860419C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086041A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086041B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086041C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086041CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086041D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086041E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086041F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086041FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604208
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604214
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604220
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860422C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604238
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604244
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604250
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860425C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604268
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604274
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604280
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860428C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604298
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086042A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086042B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086042BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086042C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086042D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086042E0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 246, 0, 235 @ 0x086042EC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 246, 0, 226 @ 0x086042F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604304
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604310
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860431C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604328
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604334
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604340
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860434C
VoiceGroup_JP_08604358: @ 0x08604358
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604358
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604364
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604370
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860437C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604388
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08604394
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086043A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086043AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086043B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086043C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086043D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086043DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086043E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086043F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604400
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860440C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604418
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604424
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604430
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860443C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604448
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604454
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604460
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860446C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604478
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604484
	voice_programmable_wave_alt 0x0863C10C, 0, 7, 15, 1 @ 0x08604490
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860449C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086044A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086044B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086044C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086044CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086044D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086044E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086044F0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_085_JP_086C1CB8, 255, 165, 154, 127 @ 0x086044FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604508
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604514
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604520
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860452C
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_Instrument_017_JP_0864E1B4, 255, 0, 255, 242 @ 0x08604538
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604544
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604550
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860455C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604568
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604574
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604580
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860458C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604598
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086045A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086045B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086045BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086045C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086045D4
	voice_directsound_no_resample 32, 49, DirectSoundWaveData_Instrument_022_JP_08651C44, 255, 127, 77, 204 @ 0x086045E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086045EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086045F8
	voice_directsound_no_resample 30, 54, DirectSoundWaveData_Instrument_024_JP_08652DDC, 8, 0, 255, 216 @ 0x08604604
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604610
	voice_directsound_no_resample 30, 54, DirectSoundWaveData_Instrument_024_JP_08652DDC, 255, 246, 0, 216 @ 0x0860461C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604628
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604634
	voice_directsound_no_resample 72, 79, DirectSoundWaveData_Instrument_025_JP_08653D08, 255, 0, 255, 0 @ 0x08604640
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860464C
	voice_directsound_no_resample 72, 74, DirectSoundWaveData_Instrument_026_JP_08654220, 255, 0, 255, 0 @ 0x08604658
VoiceGroup_JP_08604664: @ 0x08604664
	voice_keysplit_all 0x08600794 @ 0x08604664
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x08604670
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860467C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604688
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604694
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086046A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086046AC
	voice_square_2_alt 3, 0, 3, 4, 0 @ 0x086046B8
	voice_square_1_alt 0, 3, 0, 3, 4, 0 @ 0x086046C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086046D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086046DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086046E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086046F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604700
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860470C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604718
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604724
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604730
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860473C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604748
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604754
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604760
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860476C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604778
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604784
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604790
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860479C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086047A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086047B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086047C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086047CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086047D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086047E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086047F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086047FC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_053_JP_086874E4, 255, 250, 0, 149 @ 0x08604808
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604814
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604820
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860482C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604838
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604844
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604850
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860485C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604868
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604874
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604880
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860488C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604898
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086048A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086048B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086048BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086048C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086048D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086048E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086048EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086048F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604904
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604910
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860491C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604928
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604934
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604940
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860494C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604958
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604964
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604970
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860497C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604988
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604994
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086049A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086049AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086049B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086049C4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 127, 231, 127 @ 0x086049D0
	voice_programmable_wave 0x0863C0EC, 0, 7, 15, 1 @ 0x086049DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086049E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086049F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604A00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604A0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604A18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604A24
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 2 @ 0x08604A30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604A3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604A48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604A54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604A60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604A6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604A78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604A84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604A90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604A9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604AA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604AB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604AC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604ACC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604AD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604AE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604AF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604AFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604B08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604B14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604B20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604B2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604B38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604B44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604B50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604B5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604B68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604B74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604B80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604B8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604B98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604BA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604BB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604BBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604BC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604BD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604BE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604BEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604BF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604C04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604C10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604C1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604C28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604C34
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08604C40
	voice_noise_alt 0, 0, 4, 1, 4 @ 0x08604C4C
	voice_noise_alt 0, 0, 1, 0, 2 @ 0x08604C58
VoiceGroup_JP_08604C64: @ 0x08604C64
	voice_keysplit_all 0x085FDB0C @ 0x08604C64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604C70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604C7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604C88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604C94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604CA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604CAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604CB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604CC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604CD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604CDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604CE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604CF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604D00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604D0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604D18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604D24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604D30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604D3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604D48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604D54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604D60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604D6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604D78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604D84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604D90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604D9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604DA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604DB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604DC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604DCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604DD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604DE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604DF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604DFC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 149 @ 0x08604E08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604E14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604E20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604E2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604E38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604E44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604E50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604E5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604E68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604E74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604E80
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 246, 0, 235 @ 0x08604E8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604E98
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08604EA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604EB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604EBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604EC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604ED4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604EE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604EEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604EF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604F04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604F10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604F1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604F28
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08604F34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604F40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604F4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604F58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604F64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604F70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604F7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604F88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604F94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604FA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604FAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604FB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604FC4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 127, 231, 127 @ 0x08604FD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604FDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604FE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08604FF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605000
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860500C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605018
	voice_square_2_alt 2, 0, 1, 4, 1 @ 0x08605024
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605030
	voice_square_1_alt 0, 2, 0, 1, 4, 1 @ 0x0860503C
VoiceGroup_JP_08605048: @ 0x08605048
	voice_keysplit_all 0x085FDB0C @ 0x08605048
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x08605054
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605060
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860506C
	voice_square_2 2, 0, 1, 4, 2 @ 0x08605078
	voice_square_1 0, 2, 0, 1, 4, 1 @ 0x08605084
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605090
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860509C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086050A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086050B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086050C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086050CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086050D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086050E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086050F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086050FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605108
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605114
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605120
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860512C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605138
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605144
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605150
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860515C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605168
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605174
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605180
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860518C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605198
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086051A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086051B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086051BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086051C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086051D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086051E0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 188 @ 0x086051EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086051F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605204
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605210
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860521C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605228
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605234
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605240
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860524C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605258
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 226, 0, 38 @ 0x08605264
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605270
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860527C
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08605288
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605294
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086052A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086052AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086052B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086052C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086052D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086052DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086052E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086052F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605300
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860530C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605318
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605324
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605330
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860533C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605348
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605354
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605360
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860536C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605378
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605384
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605390
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860539C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086053A8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 165 @ 0x086053B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086053C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086053CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086053D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086053E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086053F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086053FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605408
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605414
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605420
	voice_programmable_wave 0x0863C1DC, 0, 7, 15, 2 @ 0x0860542C
VoiceGroup_JP_08605438: @ 0x08605438
	voice_keysplit_all 0x08604358 @ 0x08605438
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x08605444
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605450
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860545C
	voice_square_2_alt 2, 0, 1, 7, 1 @ 0x08605468
	voice_square_1_alt 0, 2, 0, 1, 7, 1 @ 0x08605474
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605480
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860548C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605498
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086054A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086054B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086054BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086054C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086054D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086054E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086054EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086054F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605504
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605510
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860551C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605528
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605534
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605540
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860554C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605558
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605564
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605570
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860557C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605588
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605594
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086055A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086055AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086055B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086055C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086055D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086055DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086055E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086055F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605600
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860560C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605618
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605624
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605630
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860563C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605648
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605654
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605660
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 246, 0, 226 @ 0x0860566C
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08605678
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605684
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605690
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860569C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086056A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086056B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086056C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086056CC
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x086056D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086056E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086056F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086056FC
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08605708
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605714
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605720
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860572C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605738
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605744
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605750
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860575C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605768
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605774
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605780
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860578C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605798
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086057A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086057B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086057BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086057C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086057D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086057E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086057EC
	voice_square_2_alt 3, 0, 1, 6, 1 @ 0x086057F8
	voice_programmable_wave_alt 0x0863C14C, 0, 7, 15, 2 @ 0x08605804
	voice_square_1_alt 0, 3, 0, 1, 6, 1 @ 0x08605810
	voice_programmable_wave_alt 0x0863C14C, 0, 7, 15, 0 @ 0x0860581C
	voice_square_1_alt 0, 3, 0, 0, 6, 1 @ 0x08605828
VoiceGroup_JP_08605834: @ 0x08605834
	voice_keysplit_all 0x085FDB0C @ 0x08605834
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605840
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860584C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605858
	voice_square_2_alt 2, 0, 1, 6, 1 @ 0x08605864
	voice_square_1_alt 0, 2, 0, 1, 6, 1 @ 0x08605870
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860587C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605888
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605894
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086058A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086058AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086058B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086058C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086058D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086058DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086058E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086058F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605900
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860590C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605918
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605924
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605930
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860593C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605948
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605954
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605960
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860596C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605978
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605984
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605990
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860599C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086059A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086059B4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_053_JP_086874E4, 255, 253, 0, 149 @ 0x086059C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086059CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086059D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086059E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086059F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086059FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605A08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605A14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605A20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605A2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605A38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605A44
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 216, 0, 165 @ 0x08605A50
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 246, 0, 235 @ 0x08605A5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605A68
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08605A74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605A80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605A8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605A98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605AA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605AB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605ABC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605AC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605AD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605AE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605AEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605AF8
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08605B04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605B10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605B1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605B28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605B34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605B40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605B4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605B58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605B64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605B70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605B7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605B88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605B94
	voice_programmable_wave 0x0863C0EC, 0, 7, 15, 0 @ 0x08605BA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605BAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605BB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605BC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605BD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605BDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605BE8
	voice_square_2_alt 2, 0, 2, 4, 1 @ 0x08605BF4
	voice_square_1_alt 0, 2, 0, 2, 4, 1 @ 0x08605C00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605C0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605C18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605C24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605C30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605C3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605C48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605C54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605C60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605C6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605C78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605C84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605C90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605C9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605CA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605CB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605CC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605CCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605CD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605CE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605CF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605CFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605D08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605D14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605D20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605D2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605D38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605D44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605D50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605D5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605D68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605D74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605D80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605D8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605D98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605DA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605DB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605DBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605DC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605DD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605DE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605DEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605DF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605E04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605E10
	voice_noise_alt 0, 0, 4, 1, 4 @ 0x08605E1C
	voice_noise_alt 0, 0, 1, 0, 2 @ 0x08605E28
VoiceGroup_JP_08605E34: @ 0x08605E34
	voice_keysplit_all 0x08604358 @ 0x08605E34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605E40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605E4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605E58
	voice_square_2_alt 2, 0, 2, 4, 1 @ 0x08605E64
	voice_square_1_alt 0, 2, 0, 2, 4, 1 @ 0x08605E70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605E7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605E88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605E94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605EA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605EAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605EB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605EC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605ED0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 216, 90, 242 @ 0x08605EDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605EE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605EF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605F00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605F0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605F18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605F24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605F30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605F3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605F48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605F54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605F60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605F6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605F78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605F84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605F90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605F9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605FA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605FB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605FC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605FCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605FD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605FE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605FF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08605FFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606008
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606014
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606020
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860602C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606038
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606044
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606050
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 246, 0, 235 @ 0x0860605C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 246, 0, 226 @ 0x08606068
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08606074
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606080
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860608C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606098
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086060A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086060B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086060BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086060C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086060D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086060E0
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x086060EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086060F8
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08606104
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606110
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860611C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606128
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606134
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606140
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860614C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606158
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606164
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606170
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860617C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606188
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606194
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086061A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086061AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086061B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086061C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086061D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086061DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086061E8
	voice_square_2_alt 0, 0, 1, 7, 1 @ 0x086061F4
	voice_programmable_wave_alt 0x0863C10C, 0, 7, 15, 2 @ 0x08606200
	voice_square_1_alt 0, 0, 0, 1, 7, 1 @ 0x0860620C
	voice_square_1_alt 0, 0, 0, 0, 7, 1 @ 0x08606218
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606224
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606230
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860623C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606248
	voice_programmable_wave_alt 0x0863C14C, 0, 7, 15, 2 @ 0x08606254
VoiceGroup_JP_08606260: @ 0x08606260
	voice_keysplit_all 0x085FDB0C @ 0x08606260
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860626C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606278
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606284
	voice_square_2 2, 0, 1, 4, 1 @ 0x08606290
	voice_square_1 0, 2, 0, 1, 4, 1 @ 0x0860629C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086062A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086062B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086062C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086062CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086062D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086062E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086062F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086062FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606308
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606314
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606320
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 127 @ 0x0860632C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606338
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606344
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606350
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860635C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606368
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606374
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606380
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860638C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606398
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086063A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086063B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086063BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086063C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086063D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086063E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086063EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086063F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606404
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606410
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860641C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 115 @ 0x08606428
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606434
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606440
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860644C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606458
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606464
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606470
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860647C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606488
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606494
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086064A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086064AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086064B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086064C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086064D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086064DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086064E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086064F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606500
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860650C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606518
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606524
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606530
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860653C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606548
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606554
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606560
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860656C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606578
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606584
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606590
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860659C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086065A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086065B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086065C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086065CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086065D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086065E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086065F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086065FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606608
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606614
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606620
	voice_programmable_wave_alt 0x0863C10C, 0, 7, 15, 0 @ 0x0860662C
VoiceGroup_JP_08606638: @ 0x08606638
	voice_keysplit_all 0x085FDB0C @ 0x08606638
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606644
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606650
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860665C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606668
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606674
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606680
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860668C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606698
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086066A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086066B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086066BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086066C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086066D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086066E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086066EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086066F8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 165 @ 0x08606704
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606710
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860671C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606728
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606734
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606740
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860674C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 76 @ 0x08606758
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606764
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606770
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860677C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606788
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606794
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086067A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086067AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086067B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086067C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086067D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086067DC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_003_JP_0863EE90, 255, 235, 128, 99 @ 0x086067E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086067F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606800
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860680C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606818
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606824
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606830
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860683C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606848
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606854
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606860
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860686C
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08606878
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606884
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606890
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860689C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086068A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086068B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086068C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086068CC
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x086068D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086068E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086068F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086068FC
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08606908
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606914
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606920
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860692C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606938
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606944
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606950
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860695C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606968
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606974
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606980
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860698C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606998
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 127 @ 0x086069A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086069B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086069BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086069C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086069D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086069E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086069EC
	voice_square_1_alt 0, 2, 0, 2, 4, 0 @ 0x086069F8
	voice_square_2_alt 1, 0, 2, 4, 0 @ 0x08606A04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606A10
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 0 @ 0x08606A1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606A28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606A34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606A40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606A4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606A58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606A64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606A70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606A7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606A88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606A94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606AA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606AAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606AB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606AC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606AD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606ADC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606AE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606AF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606B00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606B0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606B18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606B24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606B30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606B3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606B48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606B54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606B60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606B6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606B78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606B84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606B90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606B9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606BA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606BB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606BC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606BCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606BD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606BE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606BF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606BFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606C08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606C14
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x08606C20
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08606C2C
VoiceGroup_JP_08606C38: @ 0x08606C38
	voice_keysplit_all 0x085FDB0C @ 0x08606C38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606C44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606C50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606C5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606C68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606C74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606C80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606C8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606C98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606CA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606CB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606CBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606CC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606CD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606CE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606CEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606CF8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 165 @ 0x08606D04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606D10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606D1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606D28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606D34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606D40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606D4C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 76 @ 0x08606D58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606D64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606D70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606D7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606D88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606D94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606DA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606DAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606DB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606DC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606DD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606DDC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_003_JP_0863EE90, 255, 235, 128, 99 @ 0x08606DE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606DF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606E00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606E0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606E18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606E24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606E30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606E3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606E48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606E54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606E60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606E6C
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08606E78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606E84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606E90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606E9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606EA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606EB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606EC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606ECC
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08606ED8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606EE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606EF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606EFC
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08606F08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606F14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606F20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606F2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606F38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606F44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606F50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606F5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606F68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606F74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606F80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606F8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606F98
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 127 @ 0x08606FA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606FB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606FBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606FC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606FD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606FE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08606FEC
	voice_square_1_alt 0, 2, 0, 2, 4, 0 @ 0x08606FF8
	voice_square_2_alt 1, 0, 2, 4, 0 @ 0x08607004
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607010
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 0 @ 0x0860701C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607028
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607034
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607040
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860704C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607058
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607064
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607070
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860707C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607088
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607094
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086070A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086070AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086070B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086070C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086070D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086070DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086070E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086070F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607100
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860710C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607118
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607124
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607130
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860713C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607148
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607154
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607160
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860716C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607178
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607184
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607190
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860719C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086071A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086071B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086071C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086071CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086071D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086071E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086071F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086071FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607208
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607214
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x08607220
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x0860722C
VoiceGroup_JP_08607238: @ 0x08607238
	voice_keysplit_all 0x085FDB0C @ 0x08607238
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607244
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607250
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860725C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607268
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607274
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607280
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860728C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607298
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086072A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086072B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086072BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086072C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086072D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086072E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086072EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086072F8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 165 @ 0x08607304
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607310
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860731C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607328
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607334
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607340
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860734C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 76 @ 0x08607358
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607364
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607370
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860737C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607388
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607394
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086073A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086073AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086073B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086073C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086073D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086073DC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_003_JP_0863EE90, 255, 235, 128, 99 @ 0x086073E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086073F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607400
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860740C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607418
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607424
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607430
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860743C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607448
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607454
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607460
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860746C
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08607478
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607484
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607490
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860749C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086074A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086074B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086074C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086074CC
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x086074D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086074E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086074F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086074FC
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08607508
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607514
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607520
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860752C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607538
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607544
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607550
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860755C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607568
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607574
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607580
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860758C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607598
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 127 @ 0x086075A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086075B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086075BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086075C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086075D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086075E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086075EC
	voice_square_1_alt 0, 2, 0, 2, 4, 0 @ 0x086075F8
	voice_square_2_alt 1, 0, 2, 4, 0 @ 0x08607604
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607610
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 0 @ 0x0860761C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607628
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607634
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607640
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860764C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607658
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607664
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607670
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860767C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607688
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607694
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086076A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086076AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086076B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086076C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086076D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086076DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086076E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086076F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607700
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860770C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607718
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607724
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607730
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860773C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607748
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607754
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607760
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860776C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607778
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607784
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607790
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860779C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086077A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086077B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086077C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086077CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086077D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086077E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086077F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086077FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607808
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607814
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x08607820
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x0860782C
VoiceGroup_JP_08607838: @ 0x08607838
	voice_keysplit_all 0x085FDB0C @ 0x08607838
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607844
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607850
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860785C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607868
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607874
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607880
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860788C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607898
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086078A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086078B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086078BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086078C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086078D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086078E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086078EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086078F8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 165 @ 0x08607904
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607910
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860791C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607928
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607934
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607940
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860794C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 76 @ 0x08607958
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607964
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607970
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860797C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607988
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607994
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086079A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086079AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086079B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086079C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086079D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086079DC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_003_JP_0863EE90, 255, 235, 128, 99 @ 0x086079E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086079F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607A00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607A0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607A18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607A24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607A30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607A3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607A48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607A54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607A60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607A6C
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08607A78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607A84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607A90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607A9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607AA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607AB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607AC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607ACC
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08607AD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607AE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607AF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607AFC
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08607B08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607B14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607B20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607B2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607B38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607B44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607B50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607B5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607B68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607B74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607B80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607B8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607B98
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 127 @ 0x08607BA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607BB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607BBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607BC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607BD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607BE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607BEC
	voice_square_1_alt 0, 2, 0, 2, 4, 0 @ 0x08607BF8
	voice_square_2_alt 1, 0, 2, 4, 0 @ 0x08607C04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607C10
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 0 @ 0x08607C1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607C28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607C34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607C40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607C4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607C58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607C64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607C70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607C7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607C88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607C94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607CA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607CAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607CB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607CC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607CD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607CDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607CE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607CF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607D00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607D0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607D18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607D24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607D30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607D3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607D48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607D54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607D60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607D6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607D78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607D84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607D90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607D9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607DA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607DB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607DC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607DCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607DD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607DE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607DF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607DFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607E08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607E14
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x08607E20
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08607E2C
VoiceGroup_JP_08607E38: @ 0x08607E38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607E38
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x08607E44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607E50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607E5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607E68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607E74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607E80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607E8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607E98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607EA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607EB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607EBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607EC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607ED4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607EE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607EEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607EF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607F04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607F10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607F1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607F28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607F34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607F40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607F4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607F58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607F64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607F70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607F7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607F88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607F94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607FA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607FAC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 149 @ 0x08607FB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607FC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607FD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607FDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607FE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08607FF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608000
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860800C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608018
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608024
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608030
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860803C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608048
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608054
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608060
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860806C
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08608078
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608084
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608090
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860809C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086080A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086080B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086080C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086080CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086080D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086080E4
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x086080F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086080FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608108
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608114
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608120
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860812C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608138
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608144
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608150
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860815C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608168
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608174
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608180
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860818C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608198
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 165 @ 0x086081A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086081B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086081BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086081C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086081D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086081E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086081EC
	voice_square_2_alt 1, 0, 2, 4, 0 @ 0x086081F8
VoiceGroup_JP_08608204: @ 0x08608204
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x08608204
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608210
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860821C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608228
	voice_square_1_alt 0, 2, 0, 5, 1, 7 @ 0x08608234
	voice_square_2_alt 3, 0, 4, 3, 6 @ 0x08608240
	voice_square_2_alt 2, 1, 1, 4, 0 @ 0x0860824C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608258
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608264
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608270
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860827C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608288
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608294
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086082A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086082AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086082B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086082C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086082D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086082DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086082E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086082F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608300
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860830C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608318
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608324
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608330
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860833C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608348
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608354
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608360
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860836C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608378
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608384
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608390
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860839C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 224 @ 0x086083A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086083B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086083C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086083CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086083D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086083E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086083F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086083FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608408
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608414
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 226, 0, 38 @ 0x08608420
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860842C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608438
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08608444
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608450
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860845C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608468
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608474
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608480
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860848C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608498
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086084A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086084B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086084BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086084C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086084D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086084E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086084EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086084F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608504
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608510
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860851C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608528
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608534
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608540
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860854C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608558
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608564
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 165 @ 0x08608570
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860857C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608588
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608594
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086085A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086085AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086085B8
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 1 @ 0x086085C4
VoiceGroup_JP_086085D0: @ 0x086085D0
	voice_keysplit_all 0x085FDB0C @ 0x086085D0
	voice_square_1_alt 0, 1, 0, 2, 0, 1 @ 0x086085DC
	voice_square_1_alt 0, 3, 1, 2, 6, 0 @ 0x086085E8
	voice_square_2_alt 3, 1, 2, 6, 0 @ 0x086085F4
	voice_programmable_wave_alt 0x0863C0EC, 0, 7, 15, 1 @ 0x08608600
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860860C
	voice_square_2_alt 1, 0, 2, 0, 1 @ 0x08608618
	voice_programmable_wave_alt 0x0863C11C, 1, 7, 15, 1 @ 0x08608624
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608630
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860863C
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x08608648
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608654
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608660
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860866C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608678
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608684
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608690
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 210 @ 0x0860869C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086086A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086086B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086086C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086086CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086086D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086086E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086086F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086086FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608708
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608714
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608720
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860872C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608738
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608744
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608750
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860875C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608768
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608774
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608780
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860878C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 216 @ 0x08608798
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086087A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086087B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086087BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086087C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086087D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086087E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086087EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086087F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608804
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08608810
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860881C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608828
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608834
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608840
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860884C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608858
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608864
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608870
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860887C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608888
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608894
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086088A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086088AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086088B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086088C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086088D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086088DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086088E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086088F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608900
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860890C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608918
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608924
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608930
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 165 @ 0x0860893C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608948
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608954
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608960
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860896C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608978
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608984
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608990
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860899C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086089A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086089B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086089C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086089CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086089D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086089E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086089F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086089FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608A08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608A14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608A20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608A2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608A38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608A44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608A50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608A5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608A68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608A74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608A80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608A8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608A98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608AA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608AB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608ABC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608AC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608AD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608AE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608AEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608AF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608B04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608B10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608B1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608B28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608B34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608B40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608B4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608B58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608B64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608B70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608B7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608B88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608B94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608BA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608BAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608BB8
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08608BC4
VoiceGroup_JP_08608BD0: @ 0x08608BD0
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x08608BD0
	voice_programmable_wave_alt 0x0863C1BC, 0, 1, 12, 0 @ 0x08608BDC
	voice_square_1_alt 0, 0, 1, 1, 9, 0 @ 0x08608BE8
	voice_square_2_alt 2, 0, 2, 6, 3 @ 0x08608BF4
	voice_programmable_wave_alt 0x0863C10C, 0, 7, 15, 1 @ 0x08608C00
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 216 @ 0x08608C0C
	voice_square_2_alt 1, 0, 2, 6, 3 @ 0x08608C18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608C24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608C30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608C3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608C48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608C54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608C60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608C6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608C78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608C84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608C90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608C9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608CA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608CB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608CC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608CCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608CD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608CE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608CF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608CFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608D08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608D14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608D20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608D2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608D38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608D44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608D50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608D5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608D68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608D74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608D80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608D8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608D98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608DA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608DB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608DBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608DC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608DD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608DE0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 226, 0, 165 @ 0x08608DEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608DF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608E04
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08608E10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608E1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608E28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608E34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608E40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608E4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608E58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608E64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608E70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608E7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608E88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608E94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608EA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608EAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608EB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608EC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608ED0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608EDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608EE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608EF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608F00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608F0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608F18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608F24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608F30
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 165 @ 0x08608F3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608F48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608F54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608F60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608F6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608F78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608F84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608F90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608F9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608FA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608FB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608FC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608FCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608FD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608FE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608FF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08608FFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609008
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609014
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609020
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860902C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609038
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609044
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609050
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860905C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609068
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609074
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609080
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860908C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609098
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086090A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086090B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086090BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086090C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086090D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086090E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086090EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086090F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609104
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609110
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860911C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609128
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609134
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609140
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860914C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609158
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609164
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609170
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860917C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609188
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609194
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086091A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086091AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086091B8
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x086091C4
VoiceGroup_JP_086091D0: @ 0x086091D0
	voice_keysplit_all 0x085FDB0C @ 0x086091D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086091DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086091E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086091F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609200
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860920C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609218
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609224
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609230
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860923C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609248
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609254
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609260
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860926C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609278
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609284
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609290
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860929C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086092A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086092B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086092C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086092CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086092D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086092E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086092F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086092FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609308
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609314
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609320
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860932C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609338
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609344
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609350
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860935C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609368
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609374
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609380
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860938C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 115 @ 0x08609398
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086093A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086093B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086093BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086093C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086093D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086093E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086093EC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 0, 204 @ 0x086093F8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 204, 193, 239 @ 0x08609404
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08609410
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860941C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609428
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609434
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609440
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860944C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609458
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609464
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08609470
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860947C
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x08609488
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609494
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x086094A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086094AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086094B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086094C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086094D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086094DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086094E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086094F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609500
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860950C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609518
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609524
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609530
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860953C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609548
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609554
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609560
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860956C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609578
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609584
	voice_square_2_alt 2, 0, 1, 6, 2 @ 0x08609590
	voice_programmable_wave_alt 0x0863C1DC, 0, 7, 15, 0 @ 0x0860959C
	voice_square_2_alt 3, 0, 1, 4, 1 @ 0x086095A8
	voice_programmable_wave_alt 0x0863C10C, 1, 7, 15, 2 @ 0x086095B4
	voice_square_2_alt 1, 1, 1, 4, 1 @ 0x086095C0
	voice_square_1_alt 0, 1, 1, 2, 4, 1 @ 0x086095CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086095D8
	voice_square_2_alt 2, 0, 1, 6, 1 @ 0x086095E4
	voice_square_1_alt 0, 2, 0, 1, 6, 1 @ 0x086095F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086095FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609608
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609614
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609620
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860962C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609638
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609644
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609650
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860965C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609668
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609674
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609680
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860968C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609698
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086096A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086096B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086096BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086096C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086096D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086096E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086096EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086096F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609704
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609710
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860971C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609728
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609734
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609740
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860974C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609758
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609764
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609770
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860977C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609788
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609794
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086097A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086097AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086097B8
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x086097C4
VoiceGroup_JP_086097D0: @ 0x086097D0
	voice_keysplit_all 0x085FDB0C @ 0x086097D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086097DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086097E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086097F4
	voice_square_1_alt 0, 2, 0, 7, 3, 3 @ 0x08609800
	voice_square_1_alt 0, 2, 0, 1, 4, 1 @ 0x0860980C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609818
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609824
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609830
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_000_JP_0863D428, 255, 204, 51, 242 @ 0x0860983C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609848
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609854
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609860
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860986C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609878
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609884
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609890
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860989C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086098A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086098B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086098C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086098CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086098D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086098E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086098F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086098FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609908
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609914
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609920
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860992C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609938
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609944
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609950
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860995C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609968
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609974
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609980
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860998C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609998
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086099A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086099B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086099BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086099C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086099D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086099E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086099EC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 0, 242 @ 0x086099F8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 193, 239 @ 0x08609A04
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08609A10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609A1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609A28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609A34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609A40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609A4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609A58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609A64
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08609A70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609A7C
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x08609A88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609A94
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08609AA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609AAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609AB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609AC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609AD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609ADC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609AE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609AF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609B00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609B0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609B18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609B24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609B30
	voice_programmable_wave_alt 0x0863C0FC, 0, 7, 15, 0 @ 0x08609B3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609B48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609B54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609B60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609B6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609B78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609B84
	voice_square_2_alt 3, 0, 4, 4, 0 @ 0x08609B90
	voice_square_1_alt 0, 3, 0, 3, 6, 0 @ 0x08609B9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609BA8
	voice_square_1_alt 0, 0, 0, 3, 3, 0 @ 0x08609BB4
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 12, 1 @ 0x08609BC0
	voice_square_2_alt 1, 0, 1, 4, 3 @ 0x08609BCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609BD8
	voice_square_2_alt 0, 0, 2, 4, 0 @ 0x08609BE4
VoiceGroup_JP_08609BF0: @ 0x08609BF0
	voice_keysplit_all 0x085FDB0C @ 0x08609BF0
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x08609BFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609C08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609C14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609C20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609C2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609C38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609C44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609C50
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_000_JP_0863D428, 255, 165, 51, 242 @ 0x08609C5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609C68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609C74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609C80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609C8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609C98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609CA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609CB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609CBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609CC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609CD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609CE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609CEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609CF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609D04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609D10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609D1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609D28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609D34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609D40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609D4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609D58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609D64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609D70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609D7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609D88
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 188 @ 0x08609D94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609DA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609DAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609DB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609DC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609DD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609DDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609DE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609DF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609E00
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 226, 0, 38 @ 0x08609E0C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 0, 242 @ 0x08609E18
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 193, 226 @ 0x08609E24
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08609E30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609E3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609E48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609E54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609E60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609E6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609E78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609E84
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08609E90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609E9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609EA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609EB4
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08609EC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609ECC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609ED8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609EE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609EF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609EFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609F08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609F14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609F20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609F2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609F38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609F44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609F50
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 165 @ 0x08609F5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609F68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609F74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609F80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609F8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609F98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609FA4
	voice_square_1_alt 0, 2, 0, 2, 4, 1 @ 0x08609FB0
	voice_square_2_alt 1, 1, 3, 4, 2 @ 0x08609FBC
	voice_square_1_alt 0, 3, 0, 1, 4, 1 @ 0x08609FC8
	voice_programmable_wave_alt 0x0863C13C, 1, 7, 15, 0 @ 0x08609FD4
	voice_square_2_alt 2, 0, 2, 4, 2 @ 0x08609FE0
	voice_square_2_alt 1, 1, 3, 4, 2 @ 0x08609FEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08609FF8
	voice_square_1_alt 0, 2, 1, 4, 4, 2 @ 0x0860A004
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A010
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A01C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A028
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A034
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A040
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A04C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A058
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A064
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A070
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A07C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A088
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A094
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A0A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A0AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A0B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A0C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A0D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A0DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A0E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A0F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A100
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A10C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A118
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A124
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A130
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A13C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A148
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A154
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A160
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A16C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A178
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A184
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A190
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A19C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A1A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A1B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A1C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A1CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A1D8
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x0860A1E4
VoiceGroup_JP_0860A1F0: @ 0x0860A1F0
	voice_keysplit_all 0x085FDB0C @ 0x0860A1F0
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x0860A1FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A208
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A214
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A220
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A22C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A238
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A244
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A250
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A25C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A268
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A274
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A280
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A28C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A298
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A2A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A2B0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 210 @ 0x0860A2BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A2C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A2D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A2E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A2EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A2F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A304
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A310
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A31C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A328
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A334
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A340
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A34C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A358
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A364
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A370
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A37C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A388
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 188 @ 0x0860A394
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A3A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A3AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A3B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A3C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A3D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A3DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A3E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A3F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A400
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A40C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 0, 242 @ 0x0860A418
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A424
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A430
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A43C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A448
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A454
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A460
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A46C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A478
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A484
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A490
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A49C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A4A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A4B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A4C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A4CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A4D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A4E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A4F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A4FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A508
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A514
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A520
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A52C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A538
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A544
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A550
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A55C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A568
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A574
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A580
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A58C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A598
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A5A4
	voice_square_2_alt 3, 0, 1, 4, 1 @ 0x0860A5B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A5BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A5C8
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 1 @ 0x0860A5D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A5E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A5EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A5F8
	voice_square_1_alt 0, 1, 0, 2, 4, 1 @ 0x0860A604
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A610
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A61C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A628
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A634
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A640
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A64C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A658
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A664
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A670
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A67C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A688
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A694
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A6A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A6AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A6B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A6C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A6D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A6DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A6E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A6F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A700
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A70C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A718
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A724
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A730
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A73C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A748
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A754
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A760
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A76C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A778
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A784
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A790
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A79C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A7A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A7B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A7C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A7CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A7D8
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x0860A7E4
VoiceGroup_JP_0860A7F0: @ 0x0860A7F0
	voice_keysplit_all 0x085FDB0C @ 0x0860A7F0
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x0860A7FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A808
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A814
	voice_square_2_alt 2, 1, 4, 4, 2 @ 0x0860A820
	voice_square_1_alt 0, 2, 0, 3, 4, 1 @ 0x0860A82C
	voice_square_2_alt 2, 1, 3, 4, 2 @ 0x0860A838
	voice_square_1_alt 0, 2, 0, 3, 4, 1 @ 0x0860A844
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A850
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A85C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A868
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A874
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A880
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A88C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A898
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A8A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A8B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A8BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A8C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A8D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A8E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A8EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A8F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A904
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A910
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A91C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A928
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A934
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A940
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A94C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A958
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A964
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A970
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A97C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A988
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 188 @ 0x0860A994
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A9A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A9AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A9B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A9C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A9D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A9DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A9E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860A9F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AA00
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 226, 0, 99 @ 0x0860AA0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AA18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AA24
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x0860AA30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AA3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AA48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AA54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AA60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AA6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AA78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AA84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AA90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AA9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AAA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AAB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AAC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AACC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AAD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AAE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AAF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AAFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AB08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AB14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AB20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AB2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AB38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AB44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AB50
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 165 @ 0x0860AB5C
VoiceGroup_JP_0860AB68: @ 0x0860AB68
	voice_keysplit_all 0x085FDB0C @ 0x0860AB68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AB74
	voice_square_1 0, 3, 1, 2, 6, 0 @ 0x0860AB80
	voice_square_2 3, 1, 2, 6, 0 @ 0x0860AB8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AB98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ABA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ABB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ABBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ABC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ABD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ABE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ABEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ABF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AC04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AC10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AC1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AC28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AC34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AC40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AC4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AC58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AC64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AC70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AC7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AC88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AC94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ACA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ACAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ACB8
	voice_programmable_wave_alt 0x0863C11C, 0, 7, 15, 0 @ 0x0860ACC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ACD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ACDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ACE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ACF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AD00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AD0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AD18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AD24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AD30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AD3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AD48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AD54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AD60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AD6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AD78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AD84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AD90
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 193, 226 @ 0x0860AD9C
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x0860ADA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ADB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ADC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ADCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ADD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ADE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ADF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ADFC
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x0860AE08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AE14
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x0860AE20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AE2C
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x0860AE38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AE44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AE50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AE5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AE68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AE74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AE80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AE8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AE98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AEA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AEB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AEBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AEC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AED4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AEE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AEEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AEF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AF04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AF10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AF1C
	voice_square_2_alt 1, 0, 1, 6, 1 @ 0x0860AF28
	voice_square_1_alt 0, 0, 0, 1, 7, 1 @ 0x0860AF34
	voice_programmable_wave_alt 0x0863C10C, 0, 7, 15, 1 @ 0x0860AF40
	voice_square_2_alt 0, 0, 1, 4, 2 @ 0x0860AF4C
	voice_programmable_wave_alt 0x0863C14C, 0, 7, 15, 1 @ 0x0860AF58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AF64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AF70
	voice_square_1_alt 0, 1, 0, 7, 6, 1 @ 0x0860AF7C
	voice_square_2_alt 2, 0, 1, 6, 1 @ 0x0860AF88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AF94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AFA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AFAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AFB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AFC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AFD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AFDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AFE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860AFF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B000
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B00C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B018
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B024
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B030
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B03C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B048
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B054
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B060
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B06C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B078
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B084
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B090
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B09C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B0A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B0B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B0C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B0CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B0D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B0E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B0F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B0FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B108
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B114
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B120
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B12C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B138
	voice_noise_alt 0, 0, 1, 9, 4 @ 0x0860B144
	voice_noise_alt 0, 3, 1, 10, 0 @ 0x0860B150
	voice_noise_alt 0, 0, 2, 0, 0 @ 0x0860B15C
VoiceGroup_JP_0860B168: @ 0x0860B168
	voice_keysplit_all 0x085FDB0C @ 0x0860B168
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x0860B174
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B180
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B18C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B198
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B1A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B1B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B1BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B1C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B1D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B1E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B1EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B1F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B204
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B210
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B21C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B228
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B234
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B240
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B24C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B258
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B264
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B270
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B27C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B288
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B294
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B2A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B2AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B2B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B2C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B2D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B2DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B2E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B2F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B300
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 188 @ 0x0860B30C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B318
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B324
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B330
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B33C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B348
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B354
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B360
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B36C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B378
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 226, 0, 38 @ 0x0860B384
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B390
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B39C
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x0860B3A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B3B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B3C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B3CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B3D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B3E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B3F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B3FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B408
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B414
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B420
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B42C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B438
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B444
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B450
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B45C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B468
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B474
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B480
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B48C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B498
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B4A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B4B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B4BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B4C8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 165 @ 0x0860B4D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B4E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B4EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B4F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B504
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B510
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B51C
	voice_square_2_alt 2, 0, 1, 4, 2 @ 0x0860B528
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B534
	voice_square_1_alt 0, 3, 0, 1, 4, 1 @ 0x0860B540
	voice_programmable_wave_alt 0x0863C0EC, 0, 7, 12, 0 @ 0x0860B54C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B558
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B564
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B570
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B57C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B588
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B594
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B5A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B5AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B5B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B5C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B5D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B5DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B5E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B5F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B600
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B60C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B618
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B624
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B630
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B63C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B648
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B654
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B660
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B66C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B678
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B684
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B690
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B69C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B6A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B6B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B6C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B6CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B6D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B6E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B6F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B6FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B708
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B714
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B720
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B72C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B738
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B744
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B750
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x0860B75C
VoiceGroup_JP_0860B768: @ 0x0860B768
	voice_keysplit_all 0x085FDB0C @ 0x0860B768
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B774
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B780
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B78C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B798
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B7A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B7B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B7BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B7C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B7D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B7E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B7EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B7F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B804
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B810
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B81C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B828
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B834
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B840
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B84C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B858
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B864
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B870
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B87C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B888
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B894
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B8A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B8AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B8B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B8C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B8D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B8DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B8E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B8F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B900
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B90C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B918
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B924
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B930
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B93C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B948
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B954
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B960
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B96C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B978
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 226, 0, 38 @ 0x0860B984
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 0, 242 @ 0x0860B990
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B99C
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x0860B9A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B9B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B9C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B9CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B9D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B9E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B9F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860B9FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BA08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BA14
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x0860BA20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BA2C
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x0860BA38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BA44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BA50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BA5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BA68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BA74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BA80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BA8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BA98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BAA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BAB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BABC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BAC8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 165 @ 0x0860BAD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BAE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BAEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BAF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BB04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BB10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BB1C
	voice_square_2_alt 2, 0, 1, 5, 2 @ 0x0860BB28
	voice_square_1_alt 0, 3, 0, 1, 4, 1 @ 0x0860BB34
	voice_programmable_wave_alt 0x0863C0EC, 0, 7, 15, 0 @ 0x0860BB40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BB4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BB58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BB64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BB70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BB7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BB88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BB94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BBA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BBAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BBB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BBC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BBD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BBDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BBE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BBF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BC00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BC0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BC18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BC24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BC30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BC3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BC48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BC54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BC60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BC6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BC78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BC84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BC90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BC9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BCA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BCB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BCC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BCCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BCD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BCE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BCF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BCFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BD08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BD14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BD20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BD2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BD38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BD44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BD50
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x0860BD5C
VoiceGroup_JP_0860BD68: @ 0x0860BD68
	voice_keysplit_all 0x085FDB0C @ 0x0860BD68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BD74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BD80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BD8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BD98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BDA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BDB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BDBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BDC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BDD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BDE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BDEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BDF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BE04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BE10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BE1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BE28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BE34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BE40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BE4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BE58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BE64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BE70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BE7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BE88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BE94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BEA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BEAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BEB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BEC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BED0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BEDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BEE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BEF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BF00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BF0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BF18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BF24
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 115 @ 0x0860BF30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BF3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BF48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BF54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BF60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BF6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BF78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BF84
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 0, 204 @ 0x0860BF90
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 204, 193, 239 @ 0x0860BF9C
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x0860BFA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BFB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BFC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BFCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BFD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BFE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BFF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860BFFC
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x0860C008
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C014
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x0860C020
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C02C
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x0860C038
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C044
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C050
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C05C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C068
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C074
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C080
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C08C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C098
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C0A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C0B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C0BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C0C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C0D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C0E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C0EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C0F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C104
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C110
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C11C
	voice_square_2_alt 2, 0, 1, 4, 1 @ 0x0860C128
	voice_square_1_alt 0, 3, 0, 1, 6, 0 @ 0x0860C134
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 0 @ 0x0860C140
	voice_programmable_wave_alt 0x0863C11C, 0, 7, 15, 2 @ 0x0860C14C
	voice_square_2_alt 1, 1, 1, 4, 1 @ 0x0860C158
	voice_square_1_alt 0, 1, 0, 1, 4, 2 @ 0x0860C164
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C170
	voice_square_2_alt 2, 0, 1, 6, 1 @ 0x0860C17C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C188
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C194
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C1A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C1AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C1B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C1C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C1D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C1DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C1E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C1F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C200
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C20C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C218
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C224
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C230
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C23C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C248
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C254
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C260
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C26C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C278
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C284
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C290
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C29C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C2A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C2B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C2C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C2CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C2D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C2E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C2F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C2FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C308
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C314
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C320
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C32C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C338
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C344
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C350
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x0860C35C
VoiceGroup_JP_0860C368: @ 0x0860C368
	voice_keysplit_all 0x085FDB0C @ 0x0860C368
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C374
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C380
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C38C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C398
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C3A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C3B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C3BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C3C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C3D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C3E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C3EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C3F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C404
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C410
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C41C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C428
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C434
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C440
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C44C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C458
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C464
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C470
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C47C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C488
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C494
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C4A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C4AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C4B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C4C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C4D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C4DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C4E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C4F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C500
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C50C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C518
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C524
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 115 @ 0x0860C530
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C53C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C548
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C554
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C560
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C56C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C578
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C584
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C590
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C59C
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x0860C5A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C5B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C5C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C5CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C5D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C5E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C5F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C5FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C608
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C614
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C620
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C62C
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x0860C638
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C644
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C650
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C65C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C668
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C674
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C680
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C68C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C698
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C6A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C6B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C6BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C6C8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 165 @ 0x0860C6D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C6E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C6EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C6F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C704
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C710
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C71C
	voice_square_2_alt 0, 0, 1, 4, 1 @ 0x0860C728
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C734
	voice_square_1_alt 0, 0, 0, 1, 4, 1 @ 0x0860C740
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C74C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C758
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C764
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C770
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 1 @ 0x0860C77C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C788
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C794
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C7A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C7AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C7B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C7C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C7D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C7DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C7E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C7F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C800
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C80C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C818
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C824
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C830
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C83C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C848
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C854
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C860
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C86C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C878
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C884
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C890
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C89C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C8A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C8B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C8C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C8CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C8D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C8E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C8F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C8FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C908
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C914
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C920
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C92C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C938
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C944
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C950
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x0860C95C
VoiceGroup_JP_0860C968: @ 0x0860C968
	voice_keysplit_all 0x085FDB0C @ 0x0860C968
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C974
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C980
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C98C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C998
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C9A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C9B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C9BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C9C8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_000_JP_0863D428, 255, 188, 51, 242 @ 0x0860C9D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C9E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C9EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860C9F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CA04
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 128, 165, 90, 216 @ 0x0860CA10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CA1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CA28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CA34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CA40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CA4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CA58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CA64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CA70
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_077_JP_086B55BC, 255, 0, 255, 127 @ 0x0860CA7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CA88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CA94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CAA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CAAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CAB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CAC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CAD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CADC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CAE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CAF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CB00
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 188 @ 0x0860CB0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CB18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CB24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CB30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CB3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CB48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CB54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CB60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CB6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CB78
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 226, 0, 38 @ 0x0860CB84
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 0, 242 @ 0x0860CB90
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 193, 226 @ 0x0860CB9C
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x0860CBA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CBB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CBC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CBCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CBD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CBE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CBF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CBFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CC08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CC14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CC20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CC2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CC38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CC44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CC50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CC5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CC68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CC74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CC80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CC8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CC98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CCA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CCB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CCBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CCC8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 165 @ 0x0860CCD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CCE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CCEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CCF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CD04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CD10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CD1C
	voice_square_1_alt 0, 2, 0, 1, 4, 1 @ 0x0860CD28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CD34
	voice_programmable_wave_alt 0x0863C0EC, 1, 4, 10, 1 @ 0x0860CD40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CD4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CD58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CD64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CD70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CD7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CD88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CD94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CDA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CDAC
	voice_square_2_alt 2, 1, 5, 9, 1 @ 0x0860CDB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CDC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CDD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CDDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CDE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CDF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CE00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CE0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CE18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CE24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CE30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CE3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CE48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CE54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CE60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CE6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CE78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CE84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CE90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CE9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CEA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CEB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CEC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CECC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CED8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CEE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CEF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CEFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CF08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CF14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CF20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CF2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CF38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CF44
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x0860CF50
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x0860CF5C
VoiceGroup_JP_0860CF68: @ 0x0860CF68
	voice_keysplit_all 0x085FDB0C @ 0x0860CF68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CF74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CF80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CF8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CF98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CFA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CFB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CFBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CFC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CFD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CFE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CFEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860CFF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D004
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D010
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D01C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D028
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 210 @ 0x0860D034
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D040
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D04C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D058
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D064
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D070
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D07C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D088
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D094
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D0A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D0AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D0B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D0C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D0D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D0DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D0E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D0F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D100
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 188 @ 0x0860D10C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D118
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D124
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D130
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D13C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D148
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D154
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D160
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D16C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D178
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D184
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D190
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D19C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D1A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D1B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D1C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D1CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D1D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D1E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D1F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D1FC
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x0860D208
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D214
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x0860D220
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D22C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D238
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D244
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D250
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D25C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D268
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D274
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D280
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D28C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D298
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D2A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D2B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D2BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D2C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D2D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D2E0
	voice_programmable_wave_alt 0x0863C0FC, 0, 7, 15, 0 @ 0x0860D2EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D2F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D304
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D310
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D31C
	voice_square_1_alt 0, 2, 0, 1, 4, 1 @ 0x0860D328
	voice_square_2_alt 2, 0, 1, 4, 1 @ 0x0860D334
	voice_square_2_alt 0, 0, 1, 4, 1 @ 0x0860D340
	voice_square_1_alt 0, 0, 0, 1, 4, 1 @ 0x0860D34C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D358
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D364
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D370
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D37C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D388
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D394
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D3A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D3AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D3B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D3C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D3D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D3DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D3E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D3F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D400
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D40C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D418
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D424
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D430
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D43C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D448
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D454
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D460
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D46C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D478
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D484
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D490
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D49C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D4A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D4B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D4C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D4CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D4D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D4E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D4F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D4FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D508
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D514
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D520
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D52C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D538
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D544
	voice_noise_alt 0, 0, 2, 4, 0 @ 0x0860D550
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x0860D55C
VoiceGroup_JP_0860D568: @ 0x0860D568
	voice_keysplit_all 0x085FDB0C @ 0x0860D568
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x0860D574
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D580
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D58C
	voice_square_2_alt 1, 1, 1, 6, 2 @ 0x0860D598
	voice_programmable_wave_alt 0x0863C0EC, 0, 7, 15, 0 @ 0x0860D5A4
	voice_programmable_wave_alt 0x0863C12C, 0, 7, 15, 0 @ 0x0860D5B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D5BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D5C8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_000_JP_0863D428, 255, 165, 51, 242 @ 0x0860D5D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D5E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D5EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D5F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D604
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 165, 90, 216 @ 0x0860D610
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D61C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D628
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D634
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D640
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D64C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D658
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D664
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D670
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D67C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D688
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D694
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D6A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D6AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D6B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D6C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D6D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D6DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D6E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D6F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D700
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D70C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D718
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D724
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D730
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D73C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D748
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D754
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D760
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D76C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D778
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D784
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 51, 242 @ 0x0860D790
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 180, 239 @ 0x0860D79C
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x0860D7A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D7B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D7C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D7CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D7D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D7E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D7F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D7FC
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x0860D808
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D814
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x0860D820
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D82C
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x0860D838
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D844
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D850
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D85C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D868
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D874
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D880
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D88C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D898
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D8A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D8B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D8BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D8C8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 165 @ 0x0860D8D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D8E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D8EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D8F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D904
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D910
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D91C
	voice_square_1_alt 0, 2, 0, 1, 6, 2 @ 0x0860D928
	voice_square_2_alt 2, 0, 1, 6, 0 @ 0x0860D934
	voice_programmable_wave_alt 0x0863C0FC, 0, 7, 15, 0 @ 0x0860D940
	voice_square_1_alt 0, 1, 0, 1, 4, 1 @ 0x0860D94C
	voice_square_1_alt 0, 1, 1, 2, 4, 0 @ 0x0860D958
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D964
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D970
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 0 @ 0x0860D97C
	voice_square_2_alt 3, 0, 1, 6, 2 @ 0x0860D988
VoiceGroup_JP_0860D994: @ 0x0860D994
	voice_keysplit_all 0x085FDB0C @ 0x0860D994
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x0860D9A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D9AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D9B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D9C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D9D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D9DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D9E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860D9F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DA00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DA0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DA18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DA24
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_087_JP_086C59C8, 255, 235, 0, 204 @ 0x0860DA30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DA3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DA48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DA54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DA60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DA6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DA78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DA84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DA90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DA9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DAA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DAB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DAC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DACC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DAD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DAE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DAF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DAFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DB08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DB14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DB20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DB2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DB38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DB44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DB50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DB5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DB68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DB74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DB80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DB8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DB98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DBA4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 128, 226, 0, 38 @ 0x0860DBB0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 51, 242 @ 0x0860DBBC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 180, 246 @ 0x0860DBC8
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x0860DBD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DBE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DBEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DBF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DC04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DC10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DC1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DC28
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x0860DC34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DC40
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x0860DC4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DC58
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x0860DC64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DC70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DC7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DC88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DC94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DCA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DCAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DCB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DCC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DCD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DCDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DCE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DCF4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 127 @ 0x0860DD00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DD0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DD18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DD24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DD30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DD3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DD48
	voice_square_2_alt 1, 1, 1, 6, 1 @ 0x0860DD54
	voice_square_1_alt 0, 1, 0, 4, 4, 1 @ 0x0860DD60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DD6C
	voice_square_2_alt 2, 0, 7, 3, 3 @ 0x0860DD78
	voice_square_1_alt 0, 2, 0, 7, 3, 3 @ 0x0860DD84
	voice_square_1_alt 0, 3, 2, 2, 7, 0 @ 0x0860DD90
	voice_square_2_alt 1, 1, 2, 3, 0 @ 0x0860DD9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DDA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DDB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DDC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DDCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DDD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DDE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DDF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DDFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DE08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DE14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DE20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DE2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DE38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DE44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DE50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DE5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DE68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DE74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DE80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DE8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DE98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DEA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DEB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DEBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DEC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DED4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DEE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DEEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DEF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DF04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DF10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DF1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DF28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DF34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DF40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DF4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DF58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DF64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DF70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DF7C
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x0860DF88
VoiceGroup_JP_0860DF94: @ 0x0860DF94
	voice_keysplit_all 0x085FDB0C @ 0x0860DF94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DFA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DFAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DFB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DFC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DFD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DFDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DFE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860DFF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E000
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E00C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E018
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E024
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E030
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E03C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E048
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E054
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 210 @ 0x0860E060
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E06C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E078
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E084
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E090
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E09C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E0A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E0B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E0C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E0CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E0D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E0E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E0F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E0FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E108
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E114
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E120
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E12C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E138
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_003_JP_0863EE90, 255, 235, 128, 115 @ 0x0860E144
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E150
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E15C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E168
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E174
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E180
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E18C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E198
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E1A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E1B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E1BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E1C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E1D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E1E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E1EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E1F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E204
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E210
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E21C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E228
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x0860E234
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E240
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E24C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E258
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E264
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E270
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E27C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E288
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E294
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E2A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E2AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E2B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E2C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E2D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E2DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E2E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E2F4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 127 @ 0x0860E300
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E30C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E318
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E324
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E330
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E33C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E348
	voice_square_1_alt 0, 2, 0, 1, 4, 1 @ 0x0860E354
	voice_square_2_alt 2, 0, 1, 4, 1 @ 0x0860E360
	voice_square_2_alt 0, 0, 1, 4, 1 @ 0x0860E36C
	voice_programmable_wave_alt 0x0863C0FC, 0, 7, 15, 0 @ 0x0860E378
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 0 @ 0x0860E384
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E390
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E39C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E3A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E3B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E3C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E3CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E3D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E3E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E3F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E3FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E408
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E414
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E420
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E42C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E438
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E444
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E450
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E45C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E468
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E474
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E480
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E48C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E498
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E4A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E4B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E4BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E4C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E4D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E4E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E4EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E4F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E504
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E510
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E51C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E528
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E534
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E540
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E54C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E558
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E564
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E570
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x0860E57C
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x0860E588
VoiceGroup_JP_0860E594: @ 0x0860E594
	voice_keysplit_all 0x085FDB0C @ 0x0860E594
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E5A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E5AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E5B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E5C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E5D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E5DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E5E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E5F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E600
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E60C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E618
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E624
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E630
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E63C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E648
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E654
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E660
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E66C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E678
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E684
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E690
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E69C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E6A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E6B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E6C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E6CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E6D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E6E4
	voice_programmable_wave_alt 0x0863C1CC, 0, 7, 15, 0 @ 0x0860E6F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E6FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E708
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E714
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E720
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E72C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E738
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E744
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E750
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 115 @ 0x0860E75C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E768
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E774
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E780
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E78C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E798
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E7A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E7B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E7BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E7C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E7D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E7E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E7EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E7F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E804
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E810
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E81C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E828
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x0860E834
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E840
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E84C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E858
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E864
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E870
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E87C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E888
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E894
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E8A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E8AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E8B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E8C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E8D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E8DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E8E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E8F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E900
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E90C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E918
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E924
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E930
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E93C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E948
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E954
	voice_square_2_alt 0, 0, 1, 4, 1 @ 0x0860E960
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E96C
	voice_square_1_alt 0, 1, 0, 1, 4, 1 @ 0x0860E978
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E984
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E990
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E99C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E9A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E9B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E9C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E9CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E9D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E9E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E9F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860E9FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EA08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EA14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EA20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EA2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EA38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EA44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EA50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EA5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EA68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EA74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EA80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EA8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EA98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EAA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EAB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EABC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EAC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EAD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EAE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EAEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EAF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EB04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EB10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EB1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EB28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EB34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EB40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EB4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EB58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EB64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EB70
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x0860EB7C
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x0860EB88
VoiceGroup_JP_0860EB94: @ 0x0860EB94
	voice_keysplit_all 0x085FDB0C @ 0x0860EB94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EBA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EBAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EBB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EBC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EBD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EBDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EBE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EBF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EC00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EC0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EC18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EC24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EC30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EC3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EC48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EC54
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 165 @ 0x0860EC60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EC6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EC78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EC84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EC90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EC9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ECA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ECB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ECC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ECCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ECD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ECE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ECF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ECFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ED08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ED14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ED20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ED2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ED38
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_003_JP_0863EE90, 255, 235, 128, 99 @ 0x0860ED44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ED50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ED5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ED68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ED74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ED80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ED8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860ED98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EDA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EDB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EDBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EDC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EDD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EDE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EDEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EDF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EE04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EE10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EE1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EE28
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x0860EE34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EE40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EE4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EE58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EE64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EE70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EE7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EE88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EE94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EEA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EEAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EEB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EEC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EED0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EEDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EEE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EEF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EF00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EF0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EF18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EF24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EF30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EF3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EF48
	voice_square_1_alt 0, 1, 0, 1, 4, 1 @ 0x0860EF54
	voice_square_2_alt 1, 0, 1, 4, 1 @ 0x0860EF60
	voice_square_2_alt 0, 0, 1, 4, 1 @ 0x0860EF6C
	voice_programmable_wave_alt 0x0863C0FC, 0, 7, 15, 0 @ 0x0860EF78
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 0 @ 0x0860EF84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EF90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EF9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EFA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EFB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EFC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EFCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EFD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EFE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EFF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860EFFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F008
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F014
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F020
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F02C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F038
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F044
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F050
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F05C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F068
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F074
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F080
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F08C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F098
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F0A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F0B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F0BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F0C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F0D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F0E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F0EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F0F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F104
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F110
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F11C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F128
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F134
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F140
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F14C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F158
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F164
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F170
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x0860F17C
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x0860F188
VoiceGroup_JP_0860F194: @ 0x0860F194
	voice_keysplit_all 0x085FDB0C @ 0x0860F194
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F1A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F1AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F1B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F1C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F1D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F1DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F1E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F1F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F200
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F20C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F218
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F224
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F230
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F23C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F248
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F254
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F260
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F26C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F278
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F284
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F290
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F29C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F2A8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 76 @ 0x0860F2B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F2C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F2CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F2D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F2E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F2F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F2FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F308
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F314
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F320
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F32C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F338
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F344
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F350
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F35C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F368
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F374
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F380
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F38C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F398
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F3A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F3B0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 51, 242 @ 0x0860F3BC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 180, 246 @ 0x0860F3C8
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x0860F3D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F3E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F3EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F3F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F404
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F410
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F41C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F428
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F434
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F440
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F44C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F458
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x0860F464
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F470
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F47C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F488
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F494
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F4A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F4AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F4B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F4C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F4D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F4DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F4E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F4F4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 127 @ 0x0860F500
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F50C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F518
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F524
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F530
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F53C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F548
	voice_square_1_alt 0, 0, 0, 1, 4, 1 @ 0x0860F554
	voice_square_2_alt 0, 0, 1, 4, 1 @ 0x0860F560
	voice_programmable_wave_alt 0x0863C0EC, 0, 7, 15, 0 @ 0x0860F56C
	voice_square_2_alt 3, 0, 1, 4, 1 @ 0x0860F578
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F584
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F590
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F59C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F5A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F5B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F5C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F5CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F5D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F5E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F5F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F5FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F608
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F614
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F620
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F62C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F638
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F644
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F650
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F65C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F668
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F674
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F680
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F68C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F698
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F6A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F6B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F6BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F6C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F6D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F6E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F6EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F6F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F704
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F710
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F71C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F728
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F734
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F740
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F74C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F758
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F764
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F770
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x0860F77C
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x0860F788
VoiceGroup_JP_0860F794: @ 0x0860F794
	voice_keysplit_all 0x085FDB0C @ 0x0860F794
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x0860F7A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F7AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F7B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F7C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F7D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F7DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F7E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F7F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F800
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F80C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F818
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F824
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F830
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F83C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F848
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F854
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 165 @ 0x0860F860
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F86C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F878
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F884
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F890
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F89C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F8A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F8B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F8C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F8CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F8D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F8E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F8F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F8FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F908
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F914
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F920
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F92C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F938
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_003_JP_0863EE90, 255, 235, 128, 99 @ 0x0860F944
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F950
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F95C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F968
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F974
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F980
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F98C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F998
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F9A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F9B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F9BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F9C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F9D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F9E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F9EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860F9F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FA04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FA10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FA1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FA28
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x0860FA34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FA40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FA4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FA58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FA64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FA70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FA7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FA88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FA94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FAA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FAAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FAB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FAC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FAD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FADC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FAE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FAF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FB00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FB0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FB18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FB24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FB30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FB3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FB48
	voice_square_1_alt 0, 1, 0, 1, 4, 1 @ 0x0860FB54
	voice_square_2_alt 1, 0, 1, 4, 1 @ 0x0860FB60
	voice_square_2_alt 0, 0, 1, 4, 1 @ 0x0860FB6C
	voice_programmable_wave_alt 0x0863C10C, 0, 7, 15, 0 @ 0x0860FB78
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 0 @ 0x0860FB84
	voice_square_1_alt 0, 2, 0, 1, 4, 1 @ 0x0860FB90
	voice_square_2_alt 2, 0, 1, 4, 1 @ 0x0860FB9C
	voice_programmable_wave_alt 0x0863C1DC, 0, 7, 15, 0 @ 0x0860FBA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FBB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FBC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FBCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FBD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FBE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FBF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FBFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FC08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FC14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FC20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FC2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FC38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FC44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FC50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FC5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FC68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FC74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FC80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FC8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FC98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FCA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FCB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FCBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FCC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FCD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FCE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FCEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FCF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FD04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FD10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FD1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FD28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FD34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FD40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FD4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FD58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FD64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FD70
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x0860FD7C
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x0860FD88
VoiceGroup_JP_0860FD94: @ 0x0860FD94
	voice_keysplit_all 0x085FDB0C @ 0x0860FD94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FDA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FDAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FDB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FDC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FDD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FDDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FDE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FDF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FE00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FE0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FE18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FE24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FE30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FE3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FE48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FE54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FE60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FE6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FE78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FE84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FE90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FE9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FEA8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 76 @ 0x0860FEB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FEC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FECC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FED8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FEE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FEF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FEFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FF08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FF14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FF20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FF2C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 188 @ 0x0860FF38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FF44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FF50
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 115 @ 0x0860FF5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FF68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FF74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FF80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FF8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FF98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FFA4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 226, 0, 38 @ 0x0860FFB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FFBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FFC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FFD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FFE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FFEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0860FFF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610004
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610010
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861001C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610028
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610034
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610040
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861004C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610058
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610064
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610070
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861007C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610088
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610094
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086100A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086100AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086100B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086100C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086100D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086100DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086100E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086100F4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 127 @ 0x08610100
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861010C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610118
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610124
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610130
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861013C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610148
	voice_square_1 0, 1, 0, 1, 4, 1 @ 0x08610154
	voice_square_2_alt 1, 0, 1, 4, 1 @ 0x08610160
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 3 @ 0x0861016C
	voice_square_2_alt 3, 0, 1, 4, 1 @ 0x08610178
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610184
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610190
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861019C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086101A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086101B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086101C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086101CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086101D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086101E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086101F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086101FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610208
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610214
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610220
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861022C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610238
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610244
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610250
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861025C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610268
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610274
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610280
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861028C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610298
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086102A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086102B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086102BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086102C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086102D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086102E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086102EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086102F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610304
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610310
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861031C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610328
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610334
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610340
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861034C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610358
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610364
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610370
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x0861037C
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08610388
VoiceGroup_JP_08610394: @ 0x08610394
	voice_keysplit_all 0x085FDB0C @ 0x08610394
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x086103A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086103AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086103B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086103C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086103D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086103DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086103E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086103F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610400
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861040C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610418
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610424
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610430
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861043C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610448
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610454
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 210 @ 0x08610460
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861046C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610478
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610484
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610490
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861049C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086104A8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 76 @ 0x086104B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086104C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086104CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086104D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086104E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086104F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086104FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610508
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610514
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610520
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861052C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610538
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610544
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610550
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 115 @ 0x0861055C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610568
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610574
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610580
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861058C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610598
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086105A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086105B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086105BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086105C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086105D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086105E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086105EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086105F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610604
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610610
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861061C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610628
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08610634
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610640
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861064C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610658
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610664
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610670
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861067C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610688
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610694
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086106A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086106AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086106B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086106C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086106D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086106DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086106E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086106F4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 127 @ 0x08610700
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861070C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610718
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610724
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610730
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861073C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610748
	voice_square_1_alt 0, 1, 0, 1, 4, 1 @ 0x08610754
	voice_square_2_alt 1, 0, 1, 4, 1 @ 0x08610760
	voice_square_2_alt 0, 0, 1, 4, 1 @ 0x0861076C
	voice_programmable_wave_alt 0x0863C0FC, 0, 7, 15, 0 @ 0x08610778
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 0 @ 0x08610784
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610790
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861079C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086107A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086107B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086107C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086107CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086107D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086107E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086107F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086107FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610808
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610814
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610820
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861082C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610838
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610844
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610850
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861085C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610868
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610874
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610880
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861088C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610898
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086108A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086108B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086108BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086108C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086108D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086108E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086108EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086108F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610904
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610910
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861091C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610928
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610934
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610940
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861094C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610958
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610964
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610970
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x0861097C
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08610988
VoiceGroup_JP_08610994: @ 0x08610994
	voice_keysplit_all 0x085FDB0C @ 0x08610994
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x086109A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086109AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086109B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086109C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086109D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086109DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086109E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086109F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610A00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610A0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610A18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610A24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610A30
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 165, 90, 216 @ 0x08610A3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610A48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610A54
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 210 @ 0x08610A60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610A6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610A78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610A84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610A90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610A9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610AA8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 76 @ 0x08610AB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610AC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610ACC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610AD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610AE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610AF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610AFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610B08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610B14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610B20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610B2C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 188 @ 0x08610B38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610B44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610B50
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 115 @ 0x08610B5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610B68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610B74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610B80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610B8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610B98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610BA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610BB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610BBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610BC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610BD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610BE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610BEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610BF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610C04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610C10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610C1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610C28
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08610C34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610C40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610C4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610C58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610C64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610C70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610C7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610C88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610C94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610CA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610CAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610CB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610CC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610CD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610CDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610CE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610CF4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 127 @ 0x08610D00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610D0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610D18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610D24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610D30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610D3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610D48
	voice_square_1 0, 2, 0, 2, 3, 1 @ 0x08610D54
	voice_square_2_alt 2, 0, 2, 3, 1 @ 0x08610D60
	voice_square_2_alt 0, 0, 1, 4, 1 @ 0x08610D6C
	voice_programmable_wave_alt 0x0863C0FC, 0, 7, 15, 0 @ 0x08610D78
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 0 @ 0x08610D84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610D90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610D9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610DA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610DB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610DC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610DCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610DD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610DE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610DF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610DFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610E08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610E14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610E20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610E2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610E38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610E44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610E50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610E5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610E68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610E74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610E80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610E8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610E98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610EA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610EB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610EBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610EC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610ED4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610EE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610EEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610EF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610F04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610F10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610F1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610F28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610F34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610F40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610F4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610F58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610F64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610F70
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x08610F7C
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08610F88
VoiceGroup_JP_08610F94: @ 0x08610F94
	voice_keysplit_all 0x085FDB0C @ 0x08610F94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610FA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610FAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610FB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610FC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610FD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610FDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610FE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08610FF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611000
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861100C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611018
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611024
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611030
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861103C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611048
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611054
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 210 @ 0x08611060
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861106C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611078
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611084
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611090
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861109C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086110A8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 76 @ 0x086110B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086110C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086110CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086110D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086110E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086110F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086110FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611108
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611114
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611120
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861112C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 188 @ 0x08611138
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611144
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611150
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 115 @ 0x0861115C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611168
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611174
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611180
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861118C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611198
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086111A4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 226, 0, 38 @ 0x086111B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086111BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086111C8
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x086111D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086111E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086111EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086111F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611204
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611210
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861121C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611228
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611234
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611240
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x0861124C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611258
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611264
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611270
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861127C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611288
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611294
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086112A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086112AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086112B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086112C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086112D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086112DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086112E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086112F4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 127 @ 0x08611300
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861130C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611318
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611324
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611330
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861133C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611348
	voice_square_1_alt 0, 0, 0, 1, 4, 1 @ 0x08611354
	voice_square_2_alt 0, 0, 1, 4, 1 @ 0x08611360
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861136C
	voice_programmable_wave_alt 0x0863C14C, 0, 7, 15, 3 @ 0x08611378
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611384
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611390
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861139C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086113A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086113B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086113C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086113CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086113D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086113E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086113F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086113FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611408
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611414
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611420
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861142C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611438
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611444
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611450
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861145C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611468
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611474
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611480
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861148C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611498
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086114A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086114B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086114BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086114C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086114D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086114E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086114EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086114F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611504
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611510
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861151C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611528
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611534
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611540
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861154C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611558
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611564
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611570
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x0861157C
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08611588
VoiceGroup_JP_08611594: @ 0x08611594
	voice_keysplit_all 0x085FDB0C @ 0x08611594
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086115A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086115AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086115B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086115C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086115D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086115DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086115E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086115F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611600
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861160C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611618
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611624
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611630
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861163C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611648
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611654
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611660
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861166C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611678
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611684
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611690
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861169C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086116A8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 76 @ 0x086116B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086116C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086116CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086116D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086116E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086116F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086116FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611708
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611714
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611720
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861172C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 188 @ 0x08611738
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611744
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611750
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861175C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611768
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611774
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611780
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861178C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611798
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086117A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086117B0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 51, 242 @ 0x086117BC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 180, 246 @ 0x086117C8
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x086117D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086117E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086117EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086117F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611804
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611810
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861181C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611828
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08611834
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611840
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861184C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611858
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611864
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611870
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861187C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611888
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611894
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086118A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086118AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086118B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086118C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086118D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086118DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086118E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086118F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611900
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861190C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611918
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611924
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611930
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861193C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611948
	voice_square_1_alt 0, 0, 0, 1, 4, 1 @ 0x08611954
	voice_square_2_alt 2, 0, 1, 4, 1 @ 0x08611960
	voice_square_2_alt 0, 0, 1, 4, 1 @ 0x0861196C
	voice_programmable_wave_alt 0x0863C0FC, 0, 7, 15, 0 @ 0x08611978
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611984
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611990
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861199C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086119A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086119B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086119C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086119CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086119D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086119E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086119F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086119FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611A08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611A14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611A20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611A2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611A38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611A44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611A50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611A5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611A68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611A74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611A80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611A8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611A98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611AA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611AB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611ABC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611AC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611AD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611AE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611AEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611AF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611B04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611B10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611B1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611B28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611B34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611B40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611B4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611B58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611B64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611B70
	voice_noise_alt 0, 0, 2, 4, 0 @ 0x08611B7C
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08611B88
VoiceGroup_JP_08611B94: @ 0x08611B94
	voice_keysplit_all 0x085FDB0C @ 0x08611B94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611BA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611BAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611BB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611BC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611BD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611BDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611BE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611BF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611C00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611C0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611C18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611C24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611C30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611C3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611C48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611C54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611C60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611C6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611C78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611C84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611C90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611C9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611CA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611CB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611CC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611CCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611CD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611CE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611CF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611CFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611D08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611D14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611D20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611D2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611D38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611D44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611D50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611D5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611D68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611D74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611D80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611D8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611D98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611DA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611DB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611DBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611DC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611DD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611DE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611DEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611DF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611E04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611E10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611E1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611E28
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08611E34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611E40
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x08611E4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611E58
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08611E64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611E70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611E7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611E88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611E94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611EA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611EAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611EB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611EC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611ED0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611EDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611EE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611EF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611F00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611F0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611F18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611F24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611F30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611F3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611F48
	voice_square_1_alt 0, 0, 0, 1, 4, 1 @ 0x08611F54
	voice_square_2_alt 0, 0, 1, 4, 1 @ 0x08611F60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611F6C
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 2 @ 0x08611F78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611F84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611F90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611F9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611FA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611FB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611FC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611FCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611FD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611FE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611FF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08611FFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612008
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612014
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612020
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861202C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612038
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612044
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612050
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861205C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612068
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612074
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612080
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861208C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612098
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086120A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086120B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086120BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086120C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086120D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086120E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086120EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086120F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612104
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612110
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861211C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612128
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612134
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612140
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861214C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612158
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612164
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612170
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861217C
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08612188
VoiceGroup_JP_08612194: @ 0x08612194
	voice_keysplit_all 0x085FDB0C @ 0x08612194
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x086121A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086121AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086121B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086121C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086121D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086121DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086121E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086121F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612200
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861220C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612218
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612224
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_087_JP_086C59C8, 255, 235, 0, 204 @ 0x08612230
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861223C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612248
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612254
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 210 @ 0x08612260
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861226C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612278
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612284
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612290
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861229C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086122A8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 76 @ 0x086122B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086122C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086122CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086122D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086122E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086122F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086122FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612308
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612314
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612320
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861232C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 188 @ 0x08612338
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612344
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612350
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861235C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612368
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612374
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612380
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861238C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612398
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086123A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086123B0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 51, 242 @ 0x086123BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086123C8
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x086123D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086123E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086123EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086123F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612404
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612410
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861241C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612428
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08612434
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612440
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861244C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612458
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08612464
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612470
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861247C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612488
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612494
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086124A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086124AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086124B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086124C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086124D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086124DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086124E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086124F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612500
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861250C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612518
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612524
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612530
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861253C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612548
	voice_square_1_alt 0, 2, 0, 1, 4, 1 @ 0x08612554
	voice_square_2_alt 2, 0, 1, 4, 1 @ 0x08612560
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 0 @ 0x0861256C
	voice_programmable_wave_alt 0x0863C0FC, 0, 7, 15, 0 @ 0x08612578
	voice_square_2_alt 0, 0, 1, 4, 0 @ 0x08612584
	voice_square_1_alt 0, 0, 0, 1, 4, 0 @ 0x08612590
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861259C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086125A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086125B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086125C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086125CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086125D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086125E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086125F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086125FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612608
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612614
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612620
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861262C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612638
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612644
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612650
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861265C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612668
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612674
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612680
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861268C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612698
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086126A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086126B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086126BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086126C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086126D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086126E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086126EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086126F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612704
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612710
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861271C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612728
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612734
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612740
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861274C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612758
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612764
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612770
	voice_noise_alt 0, 0, 2, 4, 0 @ 0x0861277C
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08612788
VoiceGroup_JP_08612794: @ 0x08612794
	voice_keysplit_all 0x085FDB0C @ 0x08612794
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x086127A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086127AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086127B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086127C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086127D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086127DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086127E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086127F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612800
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861280C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612818
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612824
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_087_JP_086C59C8, 255, 235, 0, 204 @ 0x08612830
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861283C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612848
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612854
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 210 @ 0x08612860
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861286C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612878
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612884
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612890
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861289C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086128A8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 76 @ 0x086128B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086128C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086128CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086128D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086128E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086128F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086128FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612908
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612914
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612920
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861292C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 188 @ 0x08612938
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612944
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612950
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 115 @ 0x0861295C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612968
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612974
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612980
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861298C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612998
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086129A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086129B0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 51, 242 @ 0x086129BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086129C8
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x086129D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086129E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086129EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086129F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612A04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612A10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612A1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612A28
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08612A34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612A40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612A4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612A58
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08612A64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612A70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612A7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612A88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612A94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612AA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612AAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612AB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612AC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612AD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612ADC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612AE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612AF4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 127 @ 0x08612B00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612B0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612B18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612B24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612B30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612B3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612B48
	voice_square_1_alt 0, 2, 0, 2, 4, 1 @ 0x08612B54
	voice_square_2_alt 2, 0, 2, 4, 1 @ 0x08612B60
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 0 @ 0x08612B6C
	voice_square_2_alt 0, 0, 1, 4, 0 @ 0x08612B78
	voice_square_1_alt 0, 0, 0, 1, 4, 0 @ 0x08612B84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612B90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612B9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612BA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612BB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612BC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612BCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612BD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612BE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612BF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612BFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612C08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612C14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612C20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612C2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612C38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612C44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612C50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612C5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612C68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612C74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612C80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612C8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612C98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612CA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612CB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612CBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612CC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612CD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612CE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612CEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612CF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612D04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612D10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612D1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612D28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612D34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612D40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612D4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612D58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612D64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612D70
	voice_noise_alt 0, 0, 2, 4, 0 @ 0x08612D7C
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08612D88
VoiceGroup_JP_08612D94: @ 0x08612D94
	voice_keysplit_all 0x085FDB0C @ 0x08612D94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612DA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612DAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612DB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612DC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612DD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612DDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612DE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612DF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612E00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612E0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612E18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612E24
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_087_JP_086C59C8, 255, 235, 0, 204 @ 0x08612E30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612E3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612E48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612E54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612E60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612E6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612E78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612E84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612E90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612E9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612EA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612EB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612EC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612ECC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612ED8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612EE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612EF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612EFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612F08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612F14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612F20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612F2C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 188 @ 0x08612F38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612F44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612F50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612F5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612F68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612F74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612F80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612F8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612F98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612FA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612FB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612FBC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 180, 216 @ 0x08612FC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612FD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612FE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612FEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08612FF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613004
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613010
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861301C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613028
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613034
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613040
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861304C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613058
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613064
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613070
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861307C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613088
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613094
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086130A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086130AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086130B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086130C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086130D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086130DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086130E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086130F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613100
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861310C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613118
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613124
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613130
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861313C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613148
	voice_square_1_alt 0, 2, 0, 1, 4, 0 @ 0x08613154
	voice_square_2_alt 2, 0, 1, 4, 0 @ 0x08613160
	voice_programmable_wave_alt 0x0863C0FC, 0, 7, 15, 0 @ 0x0861316C
	voice_square_2_alt 0, 0, 1, 4, 1 @ 0x08613178
	voice_square_1_alt 0, 1, 0, 1, 4, 1 @ 0x08613184
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613190
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861319C
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 0 @ 0x086131A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086131B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086131C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086131CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086131D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086131E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086131F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086131FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613208
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613214
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613220
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861322C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613238
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613244
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613250
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861325C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613268
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613274
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613280
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861328C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613298
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086132A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086132B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086132BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086132C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086132D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086132E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086132EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086132F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613304
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613310
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861331C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613328
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613334
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613340
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861334C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613358
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613364
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613370
	voice_noise_alt 0, 0, 2, 4, 0 @ 0x0861337C
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08613388
VoiceGroup_JP_08613394: @ 0x08613394
	voice_keysplit_all 0x085FDB0C @ 0x08613394
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x086133A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086133AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086133B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086133C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086133D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086133DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086133E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086133F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613400
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861340C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613418
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613424
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613430
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 165, 90, 216 @ 0x0861343C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613448
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613454
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613460
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861346C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613478
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613484
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613490
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861349C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086134A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086134B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086134C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086134CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086134D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086134E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086134F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086134FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613508
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613514
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613520
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861352C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 188 @ 0x08613538
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_003_JP_0863EE90, 255, 235, 128, 99 @ 0x08613544
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613550
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861355C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613568
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613574
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613580
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861358C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613598
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086135A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086135B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086135BC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 180, 246 @ 0x086135C8
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x086135D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086135E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086135EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086135F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613604
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613610
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861361C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613628
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08613634
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613640
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x0861364C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613658
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08613664
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613670
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861367C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613688
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613694
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086136A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086136AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086136B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086136C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086136D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086136DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086136E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086136F4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 127 @ 0x08613700
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861370C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613718
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613724
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613730
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861373C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613748
	voice_square_1_alt 0, 1, 0, 2, 3, 1 @ 0x08613754
	voice_square_2_alt 2, 0, 1, 4, 1 @ 0x08613760
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 0 @ 0x0861376C
	voice_programmable_wave_alt 0x0863C14C, 0, 7, 15, 0 @ 0x08613778
	voice_square_2_alt 1, 0, 1, 4, 1 @ 0x08613784
	voice_programmable_wave_alt 0x0863C0FC, 0, 7, 15, 1 @ 0x08613790
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861379C
	voice_square_1_alt 0, 0, 0, 2, 3, 1 @ 0x086137A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086137B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086137C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086137CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086137D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086137E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086137F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086137FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613808
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613814
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613820
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861382C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613838
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613844
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613850
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861385C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613868
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613874
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613880
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861388C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613898
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086138A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086138B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086138BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086138C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086138D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086138E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086138EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086138F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613904
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613910
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861391C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613928
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613934
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613940
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861394C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613958
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613964
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613970
	voice_noise_alt 0, 0, 3, 4, 0 @ 0x0861397C
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08613988
VoiceGroup_JP_08613994: @ 0x08613994
	voice_keysplit_all 0x085FDB0C @ 0x08613994
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086139A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086139AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086139B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086139C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086139D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086139DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086139E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086139F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613A00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613A0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613A18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613A24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613A30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613A3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613A48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613A54
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 165 @ 0x08613A60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613A6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613A78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613A84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613A90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613A9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613AA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613AB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613AC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613ACC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613AD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613AE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613AF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613AFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613B08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613B14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613B20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613B2C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 188 @ 0x08613B38
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_003_JP_0863EE90, 255, 235, 128, 99 @ 0x08613B44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613B50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613B5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613B68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613B74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613B80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613B8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613B98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613BA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613BB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613BBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613BC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613BD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613BE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613BEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613BF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613C04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613C10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613C1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613C28
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08613C34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613C40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613C4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613C58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613C64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613C70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613C7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613C88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613C94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613CA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613CAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613CB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613CC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613CD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613CDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613CE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613CF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613D00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613D0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613D18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613D24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613D30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613D3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613D48
	voice_square_1_alt 0, 1, 0, 1, 4, 1 @ 0x08613D54
	voice_square_2_alt 1, 0, 1, 4, 1 @ 0x08613D60
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 0 @ 0x08613D6C
	voice_programmable_wave_alt 0x0863C1CC, 0, 7, 15, 0 @ 0x08613D78
	voice_square_1_alt 0, 0, 0, 1, 4, 1 @ 0x08613D84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613D90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613D9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613DA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613DB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613DC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613DCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613DD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613DE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613DF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613DFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613E08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613E14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613E20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613E2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613E38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613E44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613E50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613E5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613E68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613E74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613E80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613E8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613E98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613EA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613EB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613EBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613EC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613ED4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613EE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613EEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613EF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613F04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613F10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613F1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613F28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613F34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613F40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613F4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613F58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613F64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613F70
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x08613F7C
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08613F88
VoiceGroup_JP_08613F94: @ 0x08613F94
	voice_keysplit_all 0x085FDB0C @ 0x08613F94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613FA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613FAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613FB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613FC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613FD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613FDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613FE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08613FF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614000
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861400C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614018
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614024
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_087_JP_086C59C8, 255, 235, 0, 204 @ 0x08614030
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861403C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614048
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614054
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 210 @ 0x08614060
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861406C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614078
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614084
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614090
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861409C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086140A8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 76 @ 0x086140B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086140C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086140CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086140D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086140E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086140F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086140FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614108
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614114
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614120
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861412C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 196 @ 0x08614138
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614144
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614150
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861415C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614168
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614174
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614180
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861418C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614198
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086141A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086141B0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 51, 242 @ 0x086141BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086141C8
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x086141D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086141E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086141EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086141F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614204
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614210
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861421C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614228
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614234
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614240
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861424C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614258
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614264
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614270
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861427C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614288
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614294
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086142A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086142AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086142B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086142C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086142D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086142DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086142E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086142F4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 127 @ 0x08614300
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861430C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614318
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614324
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614330
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861433C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614348
	voice_square_1_alt 0, 1, 0, 1, 4, 1 @ 0x08614354
	voice_square_2_alt 1, 0, 1, 4, 1 @ 0x08614360
	voice_programmable_wave_alt 0x0863C0FC, 0, 7, 15, 0 @ 0x0861436C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614378
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614384
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614390
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861439C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086143A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086143B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086143C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086143CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086143D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086143E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086143F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086143FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614408
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614414
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614420
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861442C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614438
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614444
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614450
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861445C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614468
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614474
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614480
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861448C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614498
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086144A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086144B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086144BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086144C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086144D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086144E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086144EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086144F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614504
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614510
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861451C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614528
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614534
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614540
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861454C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614558
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614564
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614570
	voice_noise_alt 0, 0, 2, 4, 0 @ 0x0861457C
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08614588
VoiceGroup_JP_08614594: @ 0x08614594
	voice_keysplit_all 0x085FDB0C @ 0x08614594
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086145A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086145AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086145B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086145C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086145D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086145DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086145E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086145F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614600
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861460C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614618
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614624
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614630
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 165, 90, 216 @ 0x0861463C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614648
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614654
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614660
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861466C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614678
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614684
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614690
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861469C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086146A8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 76 @ 0x086146B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086146C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086146CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086146D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086146E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086146F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086146FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614708
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614714
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614720
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861472C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 196 @ 0x08614738
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614744
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614750
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861475C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614768
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614774
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614780
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861478C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614798
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086147A4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 226, 0, 38 @ 0x086147B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086147BC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 180, 246 @ 0x086147C8
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x086147D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086147E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086147EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086147F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614804
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614810
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861481C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614828
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614834
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614840
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861484C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614858
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08614864
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614870
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861487C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614888
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614894
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086148A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086148AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086148B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086148C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086148D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086148DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086148E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086148F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614900
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861490C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614918
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614924
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614930
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861493C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614948
	voice_square_1_alt 0, 1, 0, 1, 4, 1 @ 0x08614954
	voice_square_2_alt 1, 0, 1, 4, 1 @ 0x08614960
	voice_programmable_wave_alt 0x0863C0EC, 0, 7, 15, 0 @ 0x0861496C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614978
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614984
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614990
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861499C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086149A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086149B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086149C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086149CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086149D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086149E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086149F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086149FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614A08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614A14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614A20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614A2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614A38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614A44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614A50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614A5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614A68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614A74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614A80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614A8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614A98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614AA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614AB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614ABC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614AC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614AD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614AE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614AEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614AF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614B04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614B10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614B1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614B28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614B34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614B40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614B4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614B58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614B64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614B70
	voice_noise_alt 0, 0, 2, 4, 0 @ 0x08614B7C
	voice_noise_alt 0, 0, 2, 0, 2 @ 0x08614B88
VoiceGroup_JP_08614B94: @ 0x08614B94
	voice_keysplit_all 0x085FDB0C @ 0x08614B94
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x08614BA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614BAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614BB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614BC4
	voice_square_2_alt 3, 0, 2, 4, 1 @ 0x08614BD0
	voice_square_2_alt 0, 0, 1, 6, 2 @ 0x08614BDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614BE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614BF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614C00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614C0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614C18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614C24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614C30
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 165, 90, 216 @ 0x08614C3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614C48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614C54
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 210 @ 0x08614C60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614C6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614C78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614C84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614C90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614C9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614CA8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 76 @ 0x08614CB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614CC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614CCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614CD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614CE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614CF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614CFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614D08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614D14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614D20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614D2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614D38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614D44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614D50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614D5C
	voice_programmable_wave_alt 0x0863C12C, 0, 7, 6, 2 @ 0x08614D68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614D74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614D80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614D8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614D98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614DA4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 226, 0, 38 @ 0x08614DB0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 51, 242 @ 0x08614DBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614DC8
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08614DD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614DE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614DEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614DF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614E04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614E10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614E1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614E28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614E34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614E40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614E4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614E58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614E64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614E70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614E7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614E88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614E94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614EA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614EAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614EB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614EC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614ED0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614EDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614EE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614EF4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 127 @ 0x08614F00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614F0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614F18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614F24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614F30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614F3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614F48
	voice_square_1_alt 0, 3, 0, 2, 4, 1 @ 0x08614F54
	voice_square_2_alt 3, 0, 1, 6, 2 @ 0x08614F60
	voice_programmable_wave_alt 0x0863C14C, 0, 7, 15, 0 @ 0x08614F6C
	voice_square_1_alt 0, 2, 0, 2, 6, 5 @ 0x08614F78
	voice_programmable_wave_alt 0x0863C0EC, 0, 7, 4, 4 @ 0x08614F84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614F90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614F9C
	voice_square_2_alt 2, 0, 1, 6, 2 @ 0x08614FA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614FB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614FC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614FCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614FD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614FE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614FF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08614FFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615008
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615014
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615020
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861502C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615038
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615044
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615050
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861505C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615068
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615074
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615080
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861508C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615098
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086150A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086150B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086150BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086150C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086150D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086150E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086150EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086150F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615104
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615110
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861511C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615128
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615134
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615140
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861514C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615158
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615164
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615170
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x0861517C
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08615188
VoiceGroup_JP_08615194: @ 0x08615194
	voice_keysplit_all 0x085FDB0C @ 0x08615194
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086151A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086151AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086151B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086151C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086151D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086151DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086151E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086151F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615200
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861520C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615218
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615224
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615230
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861523C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615248
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615254
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615260
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861526C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615278
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615284
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615290
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861529C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086152A8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 76 @ 0x086152B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086152C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086152CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086152D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086152E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086152F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086152FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615308
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615314
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615320
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861532C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615338
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615344
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615350
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 115 @ 0x0861535C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615368
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615374
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615380
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861538C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615398
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086153A4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 226, 0, 38 @ 0x086153B0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 51, 242 @ 0x086153BC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 180, 246 @ 0x086153C8
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x086153D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086153E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086153EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086153F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615404
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615410
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861541C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615428
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615434
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615440
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861544C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615458
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08615464
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615470
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861547C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615488
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615494
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086154A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086154AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086154B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086154C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086154D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086154DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086154E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086154F4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 127 @ 0x08615500
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861550C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615518
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615524
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615530
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861553C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615548
	voice_square_1_alt 0, 1, 0, 1, 4, 1 @ 0x08615554
	voice_square_2_alt 1, 0, 1, 4, 1 @ 0x08615560
	voice_programmable_wave_alt 0x0863C0EC, 0, 7, 15, 0 @ 0x0861556C
	voice_square_2_alt 3, 0, 1, 4, 1 @ 0x08615578
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615584
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615590
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861559C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086155A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086155B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086155C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086155CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086155D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086155E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086155F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086155FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615608
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615614
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615620
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861562C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615638
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615644
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615650
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861565C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615668
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615674
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615680
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861568C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615698
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086156A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086156B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086156BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086156C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086156D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086156E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086156EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086156F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615704
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615710
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861571C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615728
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615734
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615740
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861574C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615758
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615764
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615770
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x0861577C
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08615788
VoiceGroup_JP_08615794: @ 0x08615794
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615794
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x086157A0
VoiceGroup_JP_086157AC: @ 0x086157AC
	voice_keysplit_all 0x085FDB0C @ 0x086157AC
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x086157B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086157C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086157D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086157DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086157E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086157F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615800
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861580C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615818
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615824
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615830
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861583C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615848
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 165, 90, 216 @ 0x08615854
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615860
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861586C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615878
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615884
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615890
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861589C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086158A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086158B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086158C0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 76 @ 0x086158CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086158D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086158E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086158F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086158FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615908
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615914
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615920
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861592C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615938
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615944
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615950
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861595C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615968
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615974
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615980
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861598C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615998
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086159A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086159B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086159BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086159C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086159D4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 180, 246 @ 0x086159E0
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x086159EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086159F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615A04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615A10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615A1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615A28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615A34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615A40
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08615A4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615A58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615A64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615A70
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08615A7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615A88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615A94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615AA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615AAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615AB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615AC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615AD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615ADC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615AE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615AF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615B00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615B0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615B18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615B24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615B30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615B3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615B48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615B54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615B60
	voice_square_1_alt 0, 3, 0, 2, 4, 1 @ 0x08615B6C
	voice_square_2_alt 3, 0, 1, 6, 2 @ 0x08615B78
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 0 @ 0x08615B84
	voice_programmable_wave_alt 0x0863C0EC, 0, 7, 4, 4 @ 0x08615B90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615B9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615BA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615BB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615BC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615BCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615BD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615BE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615BF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615BFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615C08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615C14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615C20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615C2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615C38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615C44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615C50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615C5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615C68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615C74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615C80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615C8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615C98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615CA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615CB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615CBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615CC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615CD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615CE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615CEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615CF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615D04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615D10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615D1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615D28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615D34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615D40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615D4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615D58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615D64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615D70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615D7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615D88
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x08615D94
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08615DA0
VoiceGroup_JP_08615DAC: @ 0x08615DAC
	voice_keysplit_all 0x085FDB0C @ 0x08615DAC
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x08615DB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615DC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615DD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615DDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615DE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615DF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615E00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615E0C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_000_JP_0863D428, 255, 165, 72, 249 @ 0x08615E18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615E24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615E30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615E3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615E48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615E54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615E60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615E6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615E78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615E84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615E90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615E9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615EA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615EB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615EC0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 128, 249, 25, 76 @ 0x08615ECC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615ED8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615EE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615EF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615EFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615F08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615F14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615F20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615F2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615F38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615F44
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 188 @ 0x08615F50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615F5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615F68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615F74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615F80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615F8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615F98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615FA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615FB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615FBC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 226, 0, 38 @ 0x08615FC8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 0, 242 @ 0x08615FD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615FE0
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08615FEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08615FF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616004
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616010
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861601C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616028
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616034
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616040
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861604C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616058
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x08616064
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616070
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x0861607C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616088
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616094
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086160A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086160AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086160B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086160C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086160D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086160DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086160E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086160F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616100
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861610C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 165 @ 0x08616118
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616124
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616130
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861613C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616148
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616154
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616160
	voice_square_1_alt 0, 2, 0, 1, 4, 1 @ 0x0861616C
	voice_square_2_alt 2, 0, 1, 4, 2 @ 0x08616178
	voice_programmable_wave_alt 0x0863C0EC, 0, 7, 6, 4 @ 0x08616184
	voice_programmable_wave_alt 0x0863C0EC, 0, 2, 6, 1 @ 0x08616190
VoiceGroup_JP_0861619C: @ 0x0861619C
	voice_keysplit_all 0x085FDB0C @ 0x0861619C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086161A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086161B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086161C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086161CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086161D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086161E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086161F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086161FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616208
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616214
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616220
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861622C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616238
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 165, 90, 216 @ 0x08616244
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616250
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861625C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616268
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616274
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616280
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861628C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616298
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086162A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086162B0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 76 @ 0x086162BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086162C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086162D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086162E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086162EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086162F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616304
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616310
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861631C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616328
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616334
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616340
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861634C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616358
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616364
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616370
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861637C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616388
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616394
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086163A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086163AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086163B8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 51, 242 @ 0x086163C4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 180, 246 @ 0x086163D0
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x086163DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086163E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086163F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616400
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861640C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616418
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616424
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616430
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861643C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616448
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616454
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616460
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x0861646C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616478
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616484
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616490
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861649C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086164A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086164B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086164C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086164CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086164D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086164E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086164F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086164FC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 127 @ 0x08616508
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616514
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616520
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861652C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616538
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616544
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616550
	voice_square_1_alt 0, 1, 0, 2, 4, 0 @ 0x0861655C
	voice_square_2_alt 1, 0, 2, 4, 0 @ 0x08616568
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616574
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616580
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861658C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616598
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086165A4
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 1 @ 0x086165B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086165BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086165C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086165D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086165E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086165EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086165F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616604
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616610
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861661C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616628
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616634
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616640
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861664C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616658
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616664
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616670
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861667C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616688
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616694
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086166A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086166AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086166B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086166C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086166D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086166DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086166E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086166F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616700
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861670C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616718
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616724
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616730
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861673C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616748
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616754
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616760
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861676C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616778
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x08616784
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08616790
VoiceGroup_JP_0861679C: @ 0x0861679C
	voice_keysplit_all 0x085FDB0C @ 0x0861679C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086167A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086167B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086167C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086167CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086167D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086167E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086167F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086167FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616808
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616814
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616820
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861682C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616838
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616844
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616850
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861685C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616868
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616874
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616880
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861688C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616898
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086168A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086168B0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 76 @ 0x086168BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086168C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086168D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086168E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086168EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086168F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616904
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616910
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861691C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616928
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616934
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616940
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861694C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616958
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616964
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616970
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861697C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616988
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616994
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086169A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086169AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086169B8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 51, 242 @ 0x086169C4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 180, 246 @ 0x086169D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086169DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086169E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086169F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616A00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616A0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616A18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616A24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616A30
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08616A3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616A48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616A54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616A60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616A6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616A78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616A84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616A90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616A9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616AA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616AB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616AC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616ACC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616AD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616AE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616AF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616AFC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 127 @ 0x08616B08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616B14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616B20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616B2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616B38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616B44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616B50
	voice_square_1_alt 0, 2, 1, 2, 4, 0 @ 0x08616B5C
	voice_square_2_alt 1, 0, 2, 4, 0 @ 0x08616B68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616B74
	voice_programmable_wave_alt 0x0863C0EC, 0, 7, 15, 1 @ 0x08616B80
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 13, 1 @ 0x08616B8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616B98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616BA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616BB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616BBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616BC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616BD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616BE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616BEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616BF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616C04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616C10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616C1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616C28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616C34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616C40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616C4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616C58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616C64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616C70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616C7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616C88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616C94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616CA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616CAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616CB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616CC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616CD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616CDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616CE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616CF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616D00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616D0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616D18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616D24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616D30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616D3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616D48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616D54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616D60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616D6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616D78
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x08616D84
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08616D90
VoiceGroup_JP_08616D9C: @ 0x08616D9C
	voice_keysplit_all 0x085FDB0C @ 0x08616D9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616DA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616DB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616DC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616DCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616DD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616DE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616DF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616DFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616E08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616E14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616E20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616E2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616E38
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 165, 90, 216 @ 0x08616E44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616E50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616E5C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 165 @ 0x08616E68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616E74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616E80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616E8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616E98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616EA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616EB0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 76 @ 0x08616EBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616EC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616ED4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616EE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616EEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616EF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616F04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616F10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616F1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616F28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616F34
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 188 @ 0x08616F40
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_003_JP_0863EE90, 255, 235, 128, 99 @ 0x08616F4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616F58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616F64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616F70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616F7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616F88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616F94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616FA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616FAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616FB8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 51, 242 @ 0x08616FC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616FD0
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08616FDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616FE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08616FF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617000
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861700C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617018
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617024
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617030
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x0861703C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617048
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617054
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617060
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x0861706C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617078
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617084
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617090
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861709C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086170A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086170B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086170C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086170CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086170D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086170E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086170F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086170FC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 127 @ 0x08617108
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617114
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617120
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861712C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617138
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617144
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617150
	voice_square_1_alt 0, 2, 0, 2, 4, 0 @ 0x0861715C
	voice_square_2_alt 1, 0, 2, 4, 0 @ 0x08617168
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617174
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 0 @ 0x08617180
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861718C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617198
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086171A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086171B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086171BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086171C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086171D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086171E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086171EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086171F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617204
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617210
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861721C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617228
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617234
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617240
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861724C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617258
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617264
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617270
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861727C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617288
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617294
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086172A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086172AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086172B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086172C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086172D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086172DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086172E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086172F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617300
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861730C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617318
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617324
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617330
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861733C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617348
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617354
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617360
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861736C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617378
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x08617384
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08617390
VoiceGroup_JP_0861739C: @ 0x0861739C
	voice_keysplit_all 0x085FDB0C @ 0x0861739C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086173A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086173B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086173C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086173CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086173D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086173E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086173F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086173FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617408
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617414
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617420
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861742C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617438
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617444
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617450
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861745C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617468
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617474
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617480
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861748C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617498
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086174A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086174B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086174BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086174C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086174D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086174E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086174EC
	voice_programmable_wave_alt 0x0863C1CC, 0, 7, 15, 0 @ 0x086174F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617504
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617510
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861751C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617528
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617534
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617540
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_003_JP_0863EE90, 255, 235, 128, 99 @ 0x0861754C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617558
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 115 @ 0x08617564
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617570
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861757C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617588
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617594
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086175A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086175AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086175B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086175C4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 180, 246 @ 0x086175D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086175DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086175E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086175F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617600
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861760C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617618
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617624
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617630
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x0861763C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617648
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617654
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617660
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x0861766C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617678
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617684
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617690
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861769C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086176A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086176B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086176C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086176CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086176D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086176E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086176F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086176FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617708
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617714
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617720
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861772C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617738
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617744
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617750
	voice_square_1_alt 0, 0, 0, 1, 4, 1 @ 0x0861775C
	voice_square_2_alt 0, 0, 1, 4, 1 @ 0x08617768
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617774
	voice_programmable_wave_alt 0x0863C1DC, 0, 7, 15, 0 @ 0x08617780
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861778C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617798
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086177A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086177B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086177BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086177C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086177D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086177E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086177EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086177F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617804
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617810
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861781C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617828
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617834
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617840
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861784C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617858
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617864
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617870
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861787C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617888
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617894
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086178A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086178AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086178B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086178C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086178D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086178DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086178E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086178F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617900
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861790C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617918
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617924
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617930
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861793C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617948
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617954
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617960
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861796C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617978
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x08617984
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08617990
VoiceGroup_JP_0861799C: @ 0x0861799C
	voice_keysplit_all 0x085FDB0C @ 0x0861799C
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x086179A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086179B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086179C0
	voice_square_2_alt 1, 1, 1, 6, 2 @ 0x086179CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086179D8
	voice_programmable_wave_alt 0x0863C12C, 0, 7, 15, 0 @ 0x086179E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086179F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086179FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617A08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617A14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617A20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617A2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617A38
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 165, 90, 216 @ 0x08617A44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617A50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617A5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617A68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617A74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617A80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617A8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617A98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617AA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617AB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617ABC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617AC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617AD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617AE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617AEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617AF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617B04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617B10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617B1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617B28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617B34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617B40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617B4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617B58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617B64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617B70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617B7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617B88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617B94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617BA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617BAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617BB8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 51, 242 @ 0x08617BC4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 180, 239 @ 0x08617BD0
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08617BDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617BE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617BF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617C00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617C0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617C18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617C24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617C30
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08617C3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617C48
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x08617C54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617C60
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08617C6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617C78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617C84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617C90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617C9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617CA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617CB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617CC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617CCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617CD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617CE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617CF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617CFC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 165 @ 0x08617D08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617D14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617D20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617D2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617D38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617D44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617D50
	voice_square_1_alt 0, 1, 0, 1, 6, 2 @ 0x08617D5C
	voice_square_2_alt 1, 0, 2, 4, 0 @ 0x08617D68
	voice_programmable_wave_alt 0x0863C0FC, 0, 7, 15, 0 @ 0x08617D74
	voice_square_1_alt 0, 1, 0, 1, 4, 1 @ 0x08617D80
	voice_square_1_alt 0, 1, 1, 1, 6, 0 @ 0x08617D8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617D98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617DA4
	voice_programmable_wave_alt 0x0863C14C, 0, 7, 15, 0 @ 0x08617DB0
	voice_square_2_alt 3, 0, 1, 6, 2 @ 0x08617DBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617DC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617DD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617DE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617DEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617DF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617E04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617E10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617E1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617E28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617E34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617E40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617E4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617E58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617E64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617E70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617E7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617E88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617E94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617EA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617EAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617EB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617EC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617ED0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617EDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617EE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617EF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617F00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617F0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617F18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617F24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617F30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617F3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617F48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617F54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617F60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617F6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617F78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617F84
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08617F90
VoiceGroup_JP_08617F9C: @ 0x08617F9C
	voice_keysplit_all 0x085FDB0C @ 0x08617F9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617FA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617FB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617FC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617FCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617FD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617FE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617FF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08617FFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618008
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618014
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618020
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861802C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618038
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 165, 90, 216 @ 0x08618044
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618050
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861805C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618068
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618074
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618080
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861808C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618098
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086180A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086180B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086180BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086180C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086180D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086180E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086180EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086180F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618104
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618110
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861811C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618128
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618134
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618140
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861814C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618158
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618164
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618170
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861817C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618188
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618194
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086181A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086181AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086181B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086181C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086181D0
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x086181DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086181E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086181F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618200
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861820C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618218
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618224
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618230
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861823C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618248
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618254
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618260
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x0861826C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618278
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618284
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618290
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861829C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086182A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086182B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086182C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086182CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086182D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086182E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086182F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086182FC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 127 @ 0x08618308
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618314
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618320
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861832C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618338
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618344
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618350
	voice_square_1_alt 0, 1, 0, 2, 4, 3 @ 0x0861835C
	voice_square_2_alt 2, 0, 2, 4, 0 @ 0x08618368
	voice_programmable_wave_alt 0x0863C12C, 0, 7, 15, 0 @ 0x08618374
	voice_programmable_wave_alt 0x0863C1DC, 0, 7, 15, 0 @ 0x08618380
	voice_programmable_wave_alt 0x0863C0EC, 0, 7, 15, 0 @ 0x0861838C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618398
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086183A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086183B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086183BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086183C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086183D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086183E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086183EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086183F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618404
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618410
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861841C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618428
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618434
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618440
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861844C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618458
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618464
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618470
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861847C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618488
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618494
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086184A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086184AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086184B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086184C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086184D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086184DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086184E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086184F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618500
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861850C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618518
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618524
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618530
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861853C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618548
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618554
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618560
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861856C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618578
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x08618584
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08618590
VoiceGroup_JP_0861859C: @ 0x0861859C
	voice_keysplit_all 0x085FDB0C @ 0x0861859C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086185A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086185B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086185C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086185CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086185D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086185E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086185F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086185FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618608
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618614
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618620
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861862C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618638
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618644
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618650
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861865C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618668
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618674
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618680
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861868C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618698
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086186A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086186B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086186BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086186C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086186D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086186E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086186EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086186F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618704
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618710
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861871C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618728
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618734
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618740
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861874C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618758
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618764
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618770
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861877C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618788
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618794
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086187A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086187AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086187B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086187C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086187D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086187DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086187E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086187F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618800
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861880C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618818
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618824
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618830
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861883C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618848
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618854
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618860
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861886C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618878
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618884
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618890
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861889C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086188A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086188B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086188C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086188CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086188D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086188E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086188F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086188FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618908
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618914
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618920
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861892C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618938
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618944
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618950
	voice_square_1_alt 0, 0, 0, 2, 4, 1 @ 0x0861895C
	voice_square_2_alt 0, 0, 2, 4, 1 @ 0x08618968
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 0 @ 0x08618974
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618980
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861898C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618998
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086189A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086189B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086189BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086189C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086189D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086189E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086189EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086189F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618A04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618A10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618A1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618A28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618A34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618A40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618A4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618A58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618A64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618A70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618A7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618A88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618A94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618AA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618AAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618AB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618AC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618AD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618ADC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618AE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618AF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618B00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618B0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618B18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618B24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618B30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618B3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618B48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618B54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618B60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618B6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618B78
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x08618B84
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08618B90
VoiceGroup_JP_08618B9C: @ 0x08618B9C
	voice_keysplit_all 0x085FDB0C @ 0x08618B9C
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x08618BA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618BB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618BC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618BCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618BD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618BE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618BF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618BFC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_000_JP_0863D428, 255, 165, 72, 249 @ 0x08618C08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618C14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618C20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618C2C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_087_JP_086C59C8, 255, 235, 0, 204 @ 0x08618C38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618C44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618C50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618C5C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 165 @ 0x08618C68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618C74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618C80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618C8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618C98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618CA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618CB0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 128, 249, 25, 76 @ 0x08618CBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618CC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618CD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618CE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618CEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618CF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618D04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618D10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618D1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618D28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618D34
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 188 @ 0x08618D40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618D4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618D58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618D64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618D70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618D7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618D88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618D94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618DA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618DAC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 226, 0, 38 @ 0x08618DB8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 0, 242 @ 0x08618DC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618DD0
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08618DDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618DE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618DF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618E00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618E0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618E18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618E24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618E30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618E3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618E48
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x08618E54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618E60
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08618E6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618E78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618E84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618E90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618E9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618EA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618EB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618EC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618ECC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618ED8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618EE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618EF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618EFC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 165 @ 0x08618F08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618F14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618F20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618F2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618F38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618F44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618F50
	voice_square_1_alt 0, 2, 0, 1, 5, 2 @ 0x08618F5C
	voice_square_2_alt 2, 0, 1, 5, 2 @ 0x08618F68
	voice_programmable_wave_alt 0x0863C14C, 0, 7, 7, 0 @ 0x08618F74
	voice_programmable_wave_alt 0x0863C0EC, 0, 2, 6, 1 @ 0x08618F80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618F8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618F98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618FA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618FB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618FBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618FC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618FD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618FE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618FEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08618FF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619004
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619010
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861901C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619028
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619034
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619040
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861904C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619058
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619064
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619070
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861907C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619088
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619094
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086190A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086190AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086190B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086190C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086190D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086190DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086190E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086190F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619100
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861910C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619118
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619124
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619130
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861913C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619148
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619154
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619160
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861916C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619178
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x08619184
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08619190
VoiceGroup_JP_0861919C: @ 0x0861919C
	voice_keysplit_all 0x085FDB0C @ 0x0861919C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086191A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086191B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086191C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086191CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086191D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086191E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086191F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086191FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619208
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619214
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619220
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861922C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_087_JP_086C59C8, 255, 235, 0, 204 @ 0x08619238
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619244
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619250
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861925C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619268
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619274
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619280
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861928C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619298
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086192A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086192B0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 128, 249, 25, 76 @ 0x086192BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086192C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086192D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086192E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086192EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086192F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619304
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619310
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861931C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619328
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619334
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619340
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861934C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619358
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 115 @ 0x08619364
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619370
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861937C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619388
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619394
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086193A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086193AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086193B8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 0, 242 @ 0x086193C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086193D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086193DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086193E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086193F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619400
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861940C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619418
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619424
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619430
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861943C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619448
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619454
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619460
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861946C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619478
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619484
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619490
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861949C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086194A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086194B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086194C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086194CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086194D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086194E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086194F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086194FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619508
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619514
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619520
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861952C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619538
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619544
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619550
	voice_square_1_alt 0, 2, 0, 1, 4, 1 @ 0x0861955C
	voice_square_2_alt 2, 0, 1, 4, 2 @ 0x08619568
	voice_programmable_wave_alt 0x0863C0EC, 0, 7, 7, 0 @ 0x08619574
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619580
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861958C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619598
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086195A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086195B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086195BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086195C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086195D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086195E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086195EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086195F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619604
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619610
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861961C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619628
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619634
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619640
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861964C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619658
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619664
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619670
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861967C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619688
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619694
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086196A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086196AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086196B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086196C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086196D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086196DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086196E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086196F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619700
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861970C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619718
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619724
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619730
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861973C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619748
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619754
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619760
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861976C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619778
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x08619784
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08619790
VoiceGroup_JP_0861979C: @ 0x0861979C
	voice_keysplit_all 0x085FDB0C @ 0x0861979C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086197A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086197B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086197C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086197CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086197D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086197E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086197F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086197FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619808
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619814
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619820
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861982C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_087_JP_086C59C8, 255, 235, 0, 204 @ 0x08619838
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619844
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619850
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861985C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619868
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619874
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619880
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861988C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619898
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086198A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086198B0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 128, 249, 25, 76 @ 0x086198BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086198C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086198D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086198E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086198EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086198F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619904
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619910
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861991C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619928
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619934
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619940
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_003_JP_0863EE90, 255, 235, 128, 99 @ 0x0861994C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619958
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 115 @ 0x08619964
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619970
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861997C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619988
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619994
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086199A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086199AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086199B8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 0, 242 @ 0x086199C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086199D0
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x086199DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086199E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086199F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619A00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619A0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619A18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619A24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619A30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619A3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619A48
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x08619A54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619A60
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08619A6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619A78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619A84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619A90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619A9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619AA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619AB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619AC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619ACC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619AD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619AE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619AF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619AFC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 165 @ 0x08619B08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619B14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619B20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619B2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619B38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619B44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619B50
	voice_square_1_alt 0, 1, 0, 1, 4, 1 @ 0x08619B5C
	voice_square_2_alt 1, 0, 1, 4, 1 @ 0x08619B68
	voice_programmable_wave_alt 0x0863C14C, 0, 7, 7, 0 @ 0x08619B74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619B80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619B8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619B98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619BA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619BB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619BBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619BC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619BD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619BE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619BEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619BF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619C04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619C10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619C1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619C28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619C34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619C40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619C4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619C58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619C64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619C70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619C7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619C88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619C94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619CA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619CAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619CB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619CC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619CD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619CDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619CE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619CF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619D00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619D0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619D18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619D24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619D30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619D3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619D48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619D54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619D60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619D6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619D78
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x08619D84
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x08619D90
VoiceGroup_JP_08619D9C: @ 0x08619D9C
	voice_keysplit_all 0x085FDB0C @ 0x08619D9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619DA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619DB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619DC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619DCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619DD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619DE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619DF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619DFC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_000_JP_0863D428, 255, 165, 72, 249 @ 0x08619E08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619E14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619E20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619E2C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_087_JP_086C59C8, 255, 235, 0, 204 @ 0x08619E38
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 165, 90, 216 @ 0x08619E44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619E50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619E5C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 210 @ 0x08619E68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619E74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619E80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619E8C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_090_JP_086C8804, 255, 0, 255, 165 @ 0x08619E98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619EA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619EB0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 128, 249, 25, 76 @ 0x08619EBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619EC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619ED4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619EE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619EEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619EF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619F04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619F10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619F1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619F28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619F34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619F40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619F4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619F58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619F64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619F70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619F7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619F88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619F94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619FA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619FAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619FB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619FC4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 180, 246 @ 0x08619FD0
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08619FDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619FE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08619FF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A000
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A00C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A018
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A024
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A030
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x0861A03C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A048
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A054
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A060
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x0861A06C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A078
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A084
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A090
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A09C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A0A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A0B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A0C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A0CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A0D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A0E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A0F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A0FC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 165 @ 0x0861A108
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A114
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A120
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A12C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A138
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A144
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A150
	voice_square_1_alt 0, 0, 0, 1, 4, 1 @ 0x0861A15C
	voice_square_2_alt 0, 0, 1, 4, 1 @ 0x0861A168
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 7, 0 @ 0x0861A174
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A180
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A18C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A198
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A1A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A1B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A1BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A1C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A1D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A1E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A1EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A1F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A204
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A210
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A21C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A228
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A234
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A240
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A24C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A258
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A264
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A270
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A27C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A288
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A294
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A2A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A2AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A2B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A2C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A2D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A2DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A2E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A2F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A300
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A30C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A318
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A324
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A330
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A33C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A348
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A354
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A360
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A36C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A378
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x0861A384
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x0861A390
VoiceGroup_JP_0861A39C: @ 0x0861A39C
	voice_keysplit_all 0x085FDB0C @ 0x0861A39C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A3A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A3B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A3C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A3CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A3D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A3E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A3F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A3FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A408
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A414
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A420
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A42C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A438
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A444
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A450
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A45C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 210 @ 0x0861A468
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A474
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A480
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A48C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A498
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A4A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A4B0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 76 @ 0x0861A4BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A4C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A4D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A4E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A4EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A4F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A504
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A510
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A51C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A528
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A534
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A540
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A54C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A558
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 115 @ 0x0861A564
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A570
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A57C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A588
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A594
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A5A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A5AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A5B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A5C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A5D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A5DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A5E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A5F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A600
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A60C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A618
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A624
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A630
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A63C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A648
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A654
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A660
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A66C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A678
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A684
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A690
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A69C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A6A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A6B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A6C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A6CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A6D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A6E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A6F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A6FC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 127 @ 0x0861A708
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A714
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A720
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A72C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A738
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A744
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A750
	voice_square_1_alt 0, 1, 0, 1, 4, 1 @ 0x0861A75C
	voice_square_2_alt 1, 0, 1, 4, 1 @ 0x0861A768
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 3 @ 0x0861A774
	voice_square_2_alt 3, 0, 1, 4, 1 @ 0x0861A780
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A78C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A798
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A7A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A7B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A7BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A7C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A7D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A7E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A7EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A7F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A804
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A810
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A81C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A828
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A834
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A840
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A84C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A858
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A864
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A870
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A87C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A888
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A894
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A8A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A8AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A8B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A8C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A8D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A8DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A8E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A8F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A900
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A90C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A918
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A924
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A930
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A93C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A948
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A954
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A960
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A96C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A978
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x0861A984
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x0861A990
VoiceGroup_JP_0861A99C: @ 0x0861A99C
	voice_keysplit_all 0x085FDB0C @ 0x0861A99C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A9A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A9B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A9C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A9CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A9D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A9E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A9F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861A9FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AA08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AA14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AA20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AA2C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_087_JP_086C59C8, 255, 235, 0, 204 @ 0x0861AA38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AA44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AA50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AA5C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 210 @ 0x0861AA68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AA74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AA80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AA8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AA98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AAA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AAB0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 76 @ 0x0861AABC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AAC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AAD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AAE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AAEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AAF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AB04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AB10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AB1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AB28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AB34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AB40
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_003_JP_0863EE90, 255, 235, 128, 99 @ 0x0861AB4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AB58
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 115 @ 0x0861AB64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AB70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AB7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AB88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AB94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ABA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ABAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ABB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ABC4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 180, 246 @ 0x0861ABD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ABDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ABE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ABF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AC00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AC0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AC18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AC24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AC30
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x0861AC3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AC48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AC54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AC60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AC6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AC78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AC84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AC90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AC9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ACA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ACB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ACC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ACCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ACD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ACE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ACF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ACFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AD08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AD14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AD20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AD2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AD38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AD44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AD50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AD5C
	voice_square_2_alt 0, 0, 1, 4, 1 @ 0x0861AD68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AD74
	voice_square_1_alt 0, 0, 0, 1, 4, 1 @ 0x0861AD80
	voice_programmable_wave_alt 0x0863C1CC, 0, 7, 15, 0 @ 0x0861AD8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AD98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ADA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ADB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ADBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ADC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ADD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ADE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ADEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ADF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AE04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AE10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AE1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AE28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AE34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AE40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AE4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AE58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AE64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AE70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AE7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AE88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AE94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AEA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AEAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AEB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AEC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AED0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AEDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AEE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AEF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AF00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AF0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AF18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AF24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AF30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AF3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AF48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AF54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AF60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AF6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AF78
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x0861AF84
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x0861AF90
VoiceGroup_JP_0861AF9C: @ 0x0861AF9C
	voice_keysplit_all 0x085FDB0C @ 0x0861AF9C
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x0861AFA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AFB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AFC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AFCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AFD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AFE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AFF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861AFFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B008
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B014
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B020
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B02C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B038
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 165, 90, 216 @ 0x0861B044
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B050
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B05C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B068
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B074
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B080
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B08C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B098
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B0A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B0B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B0BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B0C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B0D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B0E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B0EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B0F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B104
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B110
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B11C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B128
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B134
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B140
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B14C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B158
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B164
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B170
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B17C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B188
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B194
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B1A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B1AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B1B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B1C4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 180, 249 @ 0x0861B1D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B1DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B1E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B1F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B200
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B20C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B218
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B224
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B230
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B23C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B248
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x0861B254
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B260
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x0861B26C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B278
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B284
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B290
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B29C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B2A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B2B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B2C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B2CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B2D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B2E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B2F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B2FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B308
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B314
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B320
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B32C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B338
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B344
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B350
	voice_square_1_alt 0, 3, 0, 1, 4, 1 @ 0x0861B35C
	voice_square_2_alt 3, 0, 1, 4, 1 @ 0x0861B368
	voice_programmable_wave_alt 0x0863C12C, 0, 7, 7, 0 @ 0x0861B374
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B380
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B38C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B398
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B3A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B3B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B3BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B3C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B3D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B3E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B3EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B3F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B404
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B410
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B41C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B428
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B434
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B440
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B44C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B458
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B464
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B470
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B47C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B488
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B494
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B4A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B4AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B4B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B4C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B4D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B4DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B4E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B4F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B500
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B50C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B518
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B524
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B530
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B53C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B548
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B554
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B560
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B56C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B578
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x0861B584
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x0861B590
VoiceGroup_JP_0861B59C: @ 0x0861B59C
	voice_keysplit_all 0x085FDB0C @ 0x0861B59C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B5A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B5B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B5C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B5CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B5D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B5E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B5F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B5FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B608
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B614
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B620
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B62C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B638
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B644
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B650
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B65C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B668
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B674
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B680
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B68C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B698
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B6A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B6B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B6BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B6C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B6D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B6E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B6EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B6F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B704
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B710
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B71C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B728
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B734
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B740
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B74C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B758
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B764
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B770
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B77C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B788
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B794
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B7A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B7AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B7B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B7C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B7D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B7DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B7E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B7F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B800
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B80C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B818
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B824
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B830
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x0861B83C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B848
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x0861B854
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B860
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B86C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B878
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B884
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B890
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B89C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B8A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B8B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B8C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B8CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B8D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B8E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B8F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B8FC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 127 @ 0x0861B908
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B914
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B920
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B92C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B938
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B944
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B950
	voice_square_1_alt 0, 0, 0, 1, 4, 0 @ 0x0861B95C
	voice_square_2_alt 0, 0, 1, 4, 0 @ 0x0861B968
	voice_programmable_wave_alt 0x0863C12C, 0, 7, 7, 0 @ 0x0861B974
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B980
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B98C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B998
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B9A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B9B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B9BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B9C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B9D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B9E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B9EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861B9F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BA04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BA10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BA1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BA28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BA34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BA40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BA4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BA58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BA64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BA70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BA7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BA88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BA94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BAA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BAAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BAB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BAC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BAD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BADC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BAE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BAF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BB00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BB0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BB18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BB24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BB30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BB3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BB48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BB54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BB60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BB6C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_088_JP_086C63FC, 255, 255, 255, 127 @ 0x0861BB78
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_016_JP_0864D924, 255, 255, 255, 127 @ 0x0861BB84
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x0861BB90
VoiceGroup_JP_0861BB9C: @ 0x0861BB9C
	voice_keysplit_all 0x085FDB0C @ 0x0861BB9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BBA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BBB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BBC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BBCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BBD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BBE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BBF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BBFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BC08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BC14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BC20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BC2C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_087_JP_086C59C8, 255, 235, 0, 204 @ 0x0861BC38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BC44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BC50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BC5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BC68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BC74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BC80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BC8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BC98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BCA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BCB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BCBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BCC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BCD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BCE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BCEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BCF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BD04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BD10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BD1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BD28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BD34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BD40
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_003_JP_0863EE90, 255, 235, 128, 99 @ 0x0861BD4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BD58
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 115 @ 0x0861BD64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BD70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BD7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BD88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BD94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BDA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BDAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BDB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BDC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BDD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BDDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BDE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BDF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BE00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BE0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BE18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BE24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BE30
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x0861BE3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BE48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BE54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BE60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BE6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BE78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BE84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BE90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BE9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BEA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BEB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BEC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BECC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BED8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BEE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BEF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BEFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BF08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BF14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BF20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BF2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BF38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BF44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BF50
	voice_square_1_alt 0, 0, 0, 1, 4, 0 @ 0x0861BF5C
	voice_square_2_alt 0, 0, 1, 4, 0 @ 0x0861BF68
	voice_programmable_wave_alt 0x0863C12C, 0, 7, 7, 0 @ 0x0861BF74
	voice_square_1_alt 0, 1, 2, 1, 5, 0 @ 0x0861BF80
	voice_square_2_alt 1, 2, 1, 5, 0 @ 0x0861BF8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BF98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BFA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BFB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BFBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BFC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BFD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BFE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BFEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861BFF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C004
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C010
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C01C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C028
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C034
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C040
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C04C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C058
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C064
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C070
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C07C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C088
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C094
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C0A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C0AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C0B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C0C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C0D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C0DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C0E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C0F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C100
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C10C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C118
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C124
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C130
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C13C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C148
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C154
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C160
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C16C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C178
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x0861C184
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x0861C190
VoiceGroup_JP_0861C19C: @ 0x0861C19C
	voice_keysplit_all 0x085FDB0C @ 0x0861C19C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C1A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C1B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C1C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C1CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C1D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C1E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C1F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C1FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C208
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C214
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C220
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C22C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_087_JP_086C59C8, 255, 235, 0, 204 @ 0x0861C238
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C244
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C250
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C25C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 210 @ 0x0861C268
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C274
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C280
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C28C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C298
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C2A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C2B0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 76 @ 0x0861C2BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C2C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C2D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C2E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C2EC
	voice_programmable_wave_alt 0x0863C1CC, 0, 7, 15, 0 @ 0x0861C2F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C304
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C310
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C31C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C328
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C334
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C340
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_003_JP_0863EE90, 255, 235, 128, 99 @ 0x0861C34C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C358
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 115 @ 0x0861C364
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C370
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C37C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C388
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C394
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C3A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C3AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C3B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C3C4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 180, 246 @ 0x0861C3D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C3DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C3E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C3F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C400
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C40C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C418
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C424
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C430
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x0861C43C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C448
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C454
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C460
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C46C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C478
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C484
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C490
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C49C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C4A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C4B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C4C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C4CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C4D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C4E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C4F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C4FC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 127 @ 0x0861C508
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C514
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C520
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C52C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C538
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C544
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C550
	voice_square_1_alt 0, 0, 0, 1, 4, 1 @ 0x0861C55C
	voice_square_1_alt 0, 2, 1, 1, 4, 1 @ 0x0861C568
	voice_square_2_alt 2, 1, 1, 4, 1 @ 0x0861C574
	voice_square_2_alt 1, 0, 1, 4, 1 @ 0x0861C580
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C58C
	voice_programmable_wave_alt 0x0863C0EC, 0, 7, 15, 0 @ 0x0861C598
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C5A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C5B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C5BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C5C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C5D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C5E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C5EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C5F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C604
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C610
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C61C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C628
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C634
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C640
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C64C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C658
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C664
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C670
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C67C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C688
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C694
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C6A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C6AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C6B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C6C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C6D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C6DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C6E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C6F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C700
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C70C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C718
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C724
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C730
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C73C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C748
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C754
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C760
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C76C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C778
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x0861C784
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x0861C790
VoiceGroup_JP_0861C79C: @ 0x0861C79C
	voice_keysplit_all 0x085FDB0C @ 0x0861C79C
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x0861C7A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C7B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C7C0
	voice_square_1_alt 0, 1, 1, 5, 2, 4 @ 0x0861C7CC
	voice_square_2_alt 1, 1, 5, 2, 4 @ 0x0861C7D8
	voice_programmable_wave_alt 0x0863C0EC, 0, 7, 15, 0 @ 0x0861C7E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C7F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C7FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C808
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C814
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C820
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C82C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C838
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 165, 90, 216 @ 0x0861C844
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C850
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C85C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C868
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C874
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C880
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C88C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C898
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C8A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C8B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C8BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C8C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C8D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C8E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C8EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C8F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C904
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C910
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C91C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C928
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C934
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C940
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C94C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C958
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C964
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C970
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C97C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C988
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C994
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C9A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C9AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C9B8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 51, 242 @ 0x0861C9C4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 180, 239 @ 0x0861C9D0
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x0861C9DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C9E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861C9F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CA00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CA0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CA18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CA24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CA30
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x0861CA3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CA48
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x0861CA54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CA60
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x0861CA6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CA78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CA84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CA90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CA9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CAA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CAB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CAC0
	voice_square_1_alt 0, 1, 1, 2, 4, 1 @ 0x0861CACC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CAD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CAE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CAF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CAFC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 165 @ 0x0861CB08
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 0 @ 0x0861CB14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CB20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CB2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CB38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CB44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CB50
	voice_square_2_alt 1, 1, 1, 6, 0 @ 0x0861CB5C
	voice_square_1_alt 0, 0, 0, 4, 6, 2 @ 0x0861CB68
	voice_programmable_wave_alt 0x0863C0FC, 0, 7, 15, 0 @ 0x0861CB74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CB80
	voice_square_1_alt 0, 0, 0, 1, 6, 0 @ 0x0861CB8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CB98
	voice_square_2_alt 1, 1, 4, 6, 1 @ 0x0861CBA4
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 0 @ 0x0861CBB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CBBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CBC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CBD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CBE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CBEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CBF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CC04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CC10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CC1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CC28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CC34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CC40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CC4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CC58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CC64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CC70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CC7C
	voice_square_2_alt 0, 1, 2, 4, 1 @ 0x0861CC88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CC94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CCA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CCAC
	voice_square_2_alt 0, 1, 1, 6, 1 @ 0x0861CCB8
VoiceGroup_JP_0861CCC4: @ 0x0861CCC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CCC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CCD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CCDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CCE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CCF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CD00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CD0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CD18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CD24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CD30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CD3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CD48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CD54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CD60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CD6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CD78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CD84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CD90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CD9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CDA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CDB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CDC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CDCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CDD8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 248 @ 0x0861CDE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CDF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CDFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CE08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CE14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CE20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CE2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CE38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CE44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CE50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CE5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CE68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CE74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CE80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CE8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CE98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CEA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CEB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CEBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CEC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CED4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CEE0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 51, 165 @ 0x0861CEEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CEF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CF04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CF10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CF1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CF28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CF34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CF40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CF4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CF58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CF64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CF70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CF7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CF88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CF94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CFA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CFAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CFB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CFC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CFD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CFDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CFE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861CFF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D000
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D00C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D018
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D024
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D030
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D03C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D048
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D054
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D060
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D06C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D078
	voice_square_1_alt 0, 2, 0, 6, 0, 6 @ 0x0861D084
	voice_square_2_alt 2, 0, 6, 0, 6 @ 0x0861D090
VoiceGroup_JP_0861D09C: @ 0x0861D09C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D09C
	voice_keysplit_all 0x085FDC68 @ 0x0861D0A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D0B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D0C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D0CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D0D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D0E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D0F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D0FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D108
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D114
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D120
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D12C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D138
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 165, 90, 216 @ 0x0861D144
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D150
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D15C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D168
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D174
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D180
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D18C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D198
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D1A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D1B0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 76 @ 0x0861D1BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D1C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D1D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D1E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D1EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D1F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D204
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D210
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D21C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D228
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D234
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D240
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D24C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D258
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D264
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D270
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D27C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D288
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D294
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D2A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D2AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D2B8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 51, 242 @ 0x0861D2C4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 180, 239 @ 0x0861D2D0
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x0861D2DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D2E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D2F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D300
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D30C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D318
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D324
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D330
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x0861D33C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D348
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D354
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D360
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x0861D36C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D378
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D384
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D390
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D39C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D3A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D3B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D3C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D3CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D3D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D3E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D3F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D3FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D408
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D414
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D420
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D42C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D438
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D444
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D450
	voice_square_1_alt 0, 1, 1, 1, 6, 0 @ 0x0861D45C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D468
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D474
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 1 @ 0x0861D480
	voice_programmable_wave_alt 0x0863C0FC, 0, 7, 15, 1 @ 0x0861D48C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D498
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D4A4
	voice_square_2_alt 1, 0, 0, 10, 1 @ 0x0861D4B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D4BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D4C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D4D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D4E0
	voice_programmable_wave_alt 0x0863C0EC, 0, 7, 15, 1 @ 0x0861D4EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D4F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D504
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D510
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D51C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D528
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D534
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D540
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D54C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D558
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D564
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D570
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D57C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D588
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D594
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D5A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D5AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D5B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D5C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D5D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D5DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D5E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D5F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D600
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D60C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D618
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D624
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D630
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D63C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D648
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D654
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D660
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D66C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D678
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D684
	voice_noise_alt 0, 0, 2, 6, 1 @ 0x0861D690
VoiceGroup_JP_0861D69C: @ 0x0861D69C
	voice_keysplit_all 0x085FDEF0 @ 0x0861D69C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D6A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D6B4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_054_JP_08689134, 255, 0, 206, 242 @ 0x0861D6C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D6CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D6D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D6E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D6F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D6FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D708
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D714
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D720
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D72C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D738
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D744
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D750
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D75C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D768
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D774
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D780
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D78C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D798
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D7A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D7B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D7BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D7C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D7D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D7E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D7EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D7F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D804
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D810
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D81C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D828
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D834
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D840
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D84C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D858
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D864
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D870
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D87C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D888
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D894
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D8A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D8AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D8B8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 51, 242 @ 0x0861D8C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D8D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D8DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D8E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D8F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D900
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D90C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D918
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D924
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D930
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D93C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D948
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D954
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D960
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D96C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D978
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D984
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D990
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D99C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D9A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D9B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D9C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D9CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D9D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D9E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D9F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861D9FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DA08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DA14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DA20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DA2C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_055_JP_0868A938, 255, 0, 255, 204 @ 0x0861DA38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DA44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DA50
	voice_square_1_alt 0, 1, 2, 0, 12, 5 @ 0x0861DA5C
	voice_square_2_alt 0, 0, 0, 10, 4 @ 0x0861DA68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DA74
	voice_programmable_wave_alt 0x0863C13C, 0, 0, 15, 0 @ 0x0861DA80
	voice_programmable_wave_alt 0x0863C0FC, 0, 7, 15, 0 @ 0x0861DA8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DA98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DAA4
	voice_square_2_alt 1, 2, 0, 12, 5 @ 0x0861DAB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DABC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DAC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DAD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DAE0
	voice_programmable_wave_alt 0x0863C0EC, 0, 0, 15, 0 @ 0x0861DAEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DAF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DB04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DB10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DB1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DB28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DB34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DB40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DB4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DB58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DB64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DB70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DB7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DB88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DB94
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_056_JP_0868E4F0, 255, 0, 206, 242 @ 0x0861DBA0
VoiceGroup_JP_0861DBAC: @ 0x0861DBAC
	voice_keysplit_all 0x085FDC68 @ 0x0861DBAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DBB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DBC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DBD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DBDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DBE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DBF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DC00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DC0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DC18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DC24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DC30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DC3C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_087_JP_086C59C8, 255, 235, 0, 216 @ 0x0861DC48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DC54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DC60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DC6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DC78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DC84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DC90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DC9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DCA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DCB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DCC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DCCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DCD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DCE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DCF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DCFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DD08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DD14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DD20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DD2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DD38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DD44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DD50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DD5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DD68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DD74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DD80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DD8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DD98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DDA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DDB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DDBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DDC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DDD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DDE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DDEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DDF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DE04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DE10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DE1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DE28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DE34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DE40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DE4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DE58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DE64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DE70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DE7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DE88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DE94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DEA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DEAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DEB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DEC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DED0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DEDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DEE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DEF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DF00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DF0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DF18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DF24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DF30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DF3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DF48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DF54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DF60
	voice_square_1_alt 0, 2, 0, 2, 9, 4 @ 0x0861DF6C
	voice_square_2_alt 2, 0, 2, 9, 4 @ 0x0861DF78
	voice_programmable_wave_alt 0x0863C0EC, 0, 7, 15, 1 @ 0x0861DF84
VoiceGroup_JP_0861DF90: @ 0x0861DF90
	voice_keysplit_all 0x085FDC68 @ 0x0861DF90
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x0861DF9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DFA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DFB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DFC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DFCC
	voice_programmable_wave_alt 0x0863C0EC, 0, 7, 15, 0 @ 0x0861DFD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DFE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DFF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861DFFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E008
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E014
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E020
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E02C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 165, 90, 216 @ 0x0861E038
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E044
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E050
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 64, 38, 128, 226 @ 0x0861E05C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E068
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E074
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E080
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E08C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E098
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E0A4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 128, 249, 25, 76 @ 0x0861E0B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E0BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E0C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E0D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E0E0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_057_JP_08690728, 255, 0, 255, 127 @ 0x0861E0EC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_058_JP_08692598, 255, 0, 255, 127 @ 0x0861E0F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E104
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E110
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E11C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E128
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E134
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E140
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E14C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 115 @ 0x0861E158
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E164
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E170
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E17C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E188
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E194
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E1A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E1AC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 51, 242 @ 0x0861E1B8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 180, 246 @ 0x0861E1C4
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x0861E1D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E1DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E1E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E1F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E200
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E20C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E218
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E224
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x0861E230
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E23C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E248
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E254
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x0861E260
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E26C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_059_JP_08695588, 255, 0, 255, 127 @ 0x0861E278
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E284
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E290
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E29C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E2A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E2B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E2C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E2CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E2D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E2E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E2F0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 165 @ 0x0861E2FC
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 0 @ 0x0861E308
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E314
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E320
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E32C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E338
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E344
	voice_square_1_alt 0, 2, 0, 1, 4, 1 @ 0x0861E350
	voice_square_2_alt 2, 0, 1, 4, 1 @ 0x0861E35C
	voice_square_2_alt 0, 0, 1, 4, 1 @ 0x0861E368
	voice_square_1_alt 0, 0, 0, 1, 4, 1 @ 0x0861E374
	voice_programmable_wave_alt 0x0863C10C, 0, 7, 15, 0 @ 0x0861E380
	voice_square_1_alt 0, 3, 0, 1, 4, 1 @ 0x0861E38C
	voice_square_2_alt 3, 0, 1, 4, 1 @ 0x0861E398
	voice_programmable_wave_alt 0x0863C12C, 0, 7, 15, 0 @ 0x0861E3A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E3B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E3BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E3C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E3D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E3E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E3EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E3F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E404
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E410
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E41C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E428
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E434
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E440
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E44C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E458
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E464
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E470
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E47C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E488
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E494
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E4A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E4AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E4B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E4C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E4D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E4DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E4E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E4F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E500
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E50C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E518
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E524
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E530
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E53C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E548
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E554
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E560
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E56C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E578
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x0861E584
VoiceGroup_JP_0861E590: @ 0x0861E590
	voice_keysplit_all 0x085FDC68 @ 0x0861E590
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E59C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E5A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E5B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E5C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E5CC
	voice_programmable_wave_alt 0x0863C0EC, 0, 7, 15, 0 @ 0x0861E5D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E5E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E5F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E5FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E608
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E614
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E620
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E62C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 165, 90, 216 @ 0x0861E638
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E644
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E650
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E65C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E668
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E674
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E680
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E68C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E698
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E6A4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 128, 249, 25, 76 @ 0x0861E6B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E6BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E6C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E6D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E6E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E6EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E6F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E704
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E710
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E71C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E728
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E734
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E740
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E74C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E758
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E764
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E770
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E77C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E788
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E794
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E7A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E7AC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 51, 242 @ 0x0861E7B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E7C4
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x0861E7D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E7DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E7E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E7F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E800
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_006_JP_08641F0C, 255, 0, 255, 0 @ 0x0861E80C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E818
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E824
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E830
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E83C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E848
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E854
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x0861E860
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E86C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E878
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E884
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E890
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E89C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E8A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E8B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E8C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E8CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E8D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E8E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E8F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E8FC
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 0 @ 0x0861E908
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E914
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E920
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E92C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E938
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E944
	voice_square_1_alt 0, 2, 0, 1, 4, 1 @ 0x0861E950
	voice_square_2_alt 2, 0, 1, 4, 1 @ 0x0861E95C
	voice_square_2_alt 0, 0, 1, 4, 1 @ 0x0861E968
	voice_square_1_alt 0, 0, 0, 1, 4, 1 @ 0x0861E974
	voice_programmable_wave_alt 0x0863C10C, 0, 7, 15, 0 @ 0x0861E980
	voice_square_1_alt 0, 3, 0, 1, 4, 1 @ 0x0861E98C
	voice_square_2_alt 3, 0, 1, 4, 1 @ 0x0861E998
	voice_programmable_wave_alt 0x0863C12C, 0, 7, 15, 0 @ 0x0861E9A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E9B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E9BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E9C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E9D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E9E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E9EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861E9F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EA04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EA10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EA1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EA28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EA34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EA40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EA4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EA58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EA64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EA70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EA7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EA88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EA94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EAA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EAAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EAB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EAC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EAD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EADC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EAE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EAF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EB00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EB0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EB18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EB24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EB30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EB3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EB48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EB54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EB60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EB6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EB78
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x0861EB84
VoiceGroup_JP_0861EB90: @ 0x0861EB90
	voice_keysplit_all 0x085FE178 @ 0x0861EB90
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x0861EB9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EBA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EBB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EBC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EBCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EBD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EBE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EBF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EBFC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_060_JP_086981DC, 255, 188, 139, 239 @ 0x0861EC08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EC14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EC20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EC2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EC38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EC44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EC50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EC5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EC68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EC74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EC80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EC8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EC98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ECA4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 128, 249, 25, 76 @ 0x0861ECB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ECBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ECC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ECD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ECE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ECEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ECF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ED04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ED10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ED1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ED28
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 188 @ 0x0861ED34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ED40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ED4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ED58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ED64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ED70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ED7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ED88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861ED94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EDA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EDAC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 51, 242 @ 0x0861EDB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EDC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EDD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EDDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EDE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EDF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EE00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EE0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EE18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EE24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EE30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EE3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EE48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EE54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EE60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EE6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EE78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EE84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EE90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EE9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EEA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EEB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EEC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EECC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EED8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EEE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EEF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EEFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EF08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EF14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EF20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EF2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EF38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EF44
	voice_square_1_alt 0, 0, 0, 1, 13, 4 @ 0x0861EF50
	voice_square_2_alt 0, 0, 0, 9, 2 @ 0x0861EF5C
	voice_square_2_alt 1, 0, 0, 7, 1 @ 0x0861EF68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EF74
	voice_programmable_wave_alt 0x0863C11C, 0, 7, 15, 1 @ 0x0861EF80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EF8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EF98
	voice_programmable_wave_alt 0x0863C0FC, 0, 0, 15, 0 @ 0x0861EFA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EFB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EFBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EFC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EFD4
	voice_programmable_wave_alt 0x0863C0EC, 0, 7, 15, 1 @ 0x0861EFE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EFEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861EFF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F004
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F010
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F01C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F028
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F034
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F040
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F04C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F058
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F064
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F070
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F07C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F088
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F094
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F0A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F0AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F0B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F0C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F0D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F0DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F0E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F0F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F100
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F10C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F118
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F124
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F130
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F13C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F148
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F154
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F160
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F16C
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x0861F178
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x0861F184
VoiceGroup_JP_0861F190: @ 0x0861F190
	voice_keysplit_all 0x085FE178 @ 0x0861F190
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F19C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F1A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F1B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F1C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F1CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F1D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F1E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F1F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F1FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F208
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F214
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F220
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F22C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F238
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F244
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F250
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F25C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F268
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_061_JP_0869C75C, 255, 76, 154, 188 @ 0x0861F274
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_062_JP_0869F0A4, 255, 76, 154, 188 @ 0x0861F280
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F28C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F298
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F2A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F2B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F2BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F2C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F2D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F2E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F2EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F2F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F304
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F310
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F31C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F328
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 188 @ 0x0861F334
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F340
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F34C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F358
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F364
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F370
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F37C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F388
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F394
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F3A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F3AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F3B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F3C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F3D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F3DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F3E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F3F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F400
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F40C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F418
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F424
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F430
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F43C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F448
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F454
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F460
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F46C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F478
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F484
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F490
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F49C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F4A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F4B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F4C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F4CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F4D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F4E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F4F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F4FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F508
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F514
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F520
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F52C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F538
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F544
	voice_square_1_alt 0, 0, 0, 0, 13, 1 @ 0x0861F550
	voice_square_2_alt 0, 0, 0, 12, 1 @ 0x0861F55C
	voice_programmable_wave_alt 0x0863C1DC, 0, 7, 15, 0 @ 0x0861F568
VoiceGroup_JP_0861F574: @ 0x0861F574
	voice_keysplit_all 0x085FDC68 @ 0x0861F574
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x0861F580
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F58C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F598
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F5A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F5B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F5BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F5C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F5D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F5E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F5EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F5F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F604
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F610
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 165, 90, 216 @ 0x0861F61C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F628
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F634
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F640
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F64C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F658
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F664
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F670
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F67C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F688
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F694
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F6A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F6AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F6B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F6C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F6D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F6DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F6E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F6F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F700
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F70C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F718
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F724
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F730
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F73C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F748
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F754
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F760
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F76C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F778
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F784
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F790
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 51, 242 @ 0x0861F79C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 180, 239 @ 0x0861F7A8
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x0861F7B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F7C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F7CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F7D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F7E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F7F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F7FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F808
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x0861F814
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F820
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F82C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F838
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x0861F844
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F850
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F85C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F868
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F874
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F880
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F88C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F898
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F8A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F8B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F8BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F8C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F8D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F8E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F8EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F8F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F904
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F910
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F91C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F928
	voice_square_1_alt 0, 1, 1, 1, 6, 0 @ 0x0861F934
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F940
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F94C
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 1 @ 0x0861F958
	voice_programmable_wave_alt 0x0863C0FC, 0, 7, 15, 1 @ 0x0861F964
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F970
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F97C
	voice_square_2_alt 3, 0, 0, 10, 1 @ 0x0861F988
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F994
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F9A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F9AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F9B8
	voice_programmable_wave_alt 0x0863C0EC, 0, 7, 15, 1 @ 0x0861F9C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F9D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F9DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F9E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861F9F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FA00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FA0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FA18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FA24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FA30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FA3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FA48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FA54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FA60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FA6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FA78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FA84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FA90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FA9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FAA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FAB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FAC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FACC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FAD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FAE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FAF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FAFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FB08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FB14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FB20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FB2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FB38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FB44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FB50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FB5C
	voice_noise_alt 0, 0, 2, 6, 1 @ 0x0861FB68
VoiceGroup_JP_0861FB74: @ 0x0861FB74
	voice_keysplit_all 0x085FDC68 @ 0x0861FB74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FB80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FB8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FB98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FBA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FBB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FBBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FBC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FBD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FBE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FBEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FBF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FC04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FC10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FC1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FC28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FC34
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 127 @ 0x0861FC40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FC4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FC58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FC64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FC70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FC7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FC88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FC94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FCA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FCAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FCB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FCC4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_057_JP_08690728, 255, 0, 255, 226 @ 0x0861FCD0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_058_JP_08692598, 255, 0, 255, 195 @ 0x0861FCDC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_100_JP_08861AB4, 255, 0, 255, 195 @ 0x0861FCE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FCF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FD00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FD0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FD18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FD24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FD30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FD3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FD48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FD54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FD60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FD6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FD78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FD84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FD90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FD9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FDA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FDB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FDC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FDCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FDD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FDE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FDF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FDFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FE08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FE14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FE20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FE2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FE38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FE44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FE50
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_059_JP_08695588, 255, 0, 255, 195 @ 0x0861FE5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FE68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FE74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FE80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FE8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FE98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FEA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FEB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FEBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FEC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FED4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FEE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FEEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FEF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FF04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FF10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FF1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FF28
	voice_square_1_alt 0, 1, 0, 1, 7, 1 @ 0x0861FF34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FF40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FF4C
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 1 @ 0x0861FF58
	voice_programmable_wave_alt 0x0863C1CC, 0, 7, 15, 1 @ 0x0861FF64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FF70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FF7C
	voice_square_2_alt 3, 0, 1, 7, 1 @ 0x0861FF88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FF94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FFA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FFAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FFB8
	voice_programmable_wave_alt 0x0863C0EC, 0, 7, 15, 1 @ 0x0861FFC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FFD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FFDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FFE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0861FFF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620000
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862000C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620018
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620024
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620030
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862003C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620048
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620054
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620060
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862006C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620078
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620084
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620090
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862009C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086200A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086200B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086200C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086200CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086200D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086200E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086200F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086200FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620108
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620114
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620120
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862012C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620138
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620144
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620150
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x0862015C
	voice_noise_alt 0, 0, 2, 6, 1 @ 0x08620168
VoiceGroup_JP_08620174: @ 0x08620174
	voice_keysplit_all 0x085FDEF0 @ 0x08620174
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x08620180
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862018C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620198
	voice_programmable_wave_alt 0x0863C22C, 0, 7, 15, 1 @ 0x086201A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086201B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086201BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086201C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086201D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086201E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086201EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086201F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620204
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620210
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 165, 90, 216 @ 0x0862021C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620228
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620234
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 210 @ 0x08620240
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862024C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620258
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620264
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620270
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862027C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620288
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 249, 25, 76 @ 0x08620294
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086202A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086202AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086202B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086202C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086202D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086202DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086202E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086202F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620300
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862030C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 188 @ 0x08620318
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620324
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620330
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 128, 252, 0, 115 @ 0x0862033C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620348
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620354
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620360
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862036C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620378
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620384
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620390
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 51, 242 @ 0x0862039C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086203A8
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x086203B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086203C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086203CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086203D8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_006_JP_08641F0C, 128, 165, 128, 188 @ 0x086203E4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_063_JP_086A0804, 128, 165, 128, 204 @ 0x086203F0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_064_JP_086A1E48, 128, 165, 128, 188 @ 0x086203FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620408
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620414
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620420
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862042C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620438
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08620444
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620450
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862045C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620468
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620474
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620480
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862048C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620498
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086204A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086204B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086204BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086204C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086204D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086204E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086204EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086204F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620504
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620510
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862051C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620528
	voice_square_1_alt 0, 1, 0, 0, 7, 0 @ 0x08620534
	voice_square_2_alt 1, 0, 0, 6, 0 @ 0x08620540
	voice_square_2_alt 3, 0, 0, 6, 0 @ 0x0862054C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620558
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620564
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620570
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862057C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620588
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620594
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086205A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086205AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086205B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086205C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086205D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086205DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086205E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086205F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620600
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862060C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620618
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620624
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620630
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862063C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620648
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620654
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620660
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862066C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620678
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620684
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620690
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862069C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086206A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086206B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086206C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086206CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086206D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086206E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086206F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086206FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620708
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620714
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620720
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862072C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620738
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620744
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620750
	voice_noise_alt 0, 0, 7, 10, 1 @ 0x0862075C
	voice_noise_alt 0, 0, 2, 6, 1 @ 0x08620768
VoiceGroup_JP_08620774: @ 0x08620774
	voice_keysplit_all 0x085FDC68 @ 0x08620774
	voice_programmable_wave_alt 0x0863C24C, 0, 7, 15, 1 @ 0x08620780
	voice_programmable_wave_alt 0x0863C26C, 0, 7, 15, 1 @ 0x0862078C
	voice_programmable_wave_alt 0x0863C25C, 0, 7, 15, 1 @ 0x08620798
	voice_programmable_wave_alt 0x0863C22C, 0, 7, 15, 1 @ 0x086207A4
	voice_programmable_wave_alt 0x0863C23C, 0, 7, 15, 1 @ 0x086207B0
	voice_programmable_wave_alt 0x0863C16C, 0, 7, 15, 1 @ 0x086207BC
	voice_programmable_wave_alt 0x0863C17C, 0, 7, 15, 1 @ 0x086207C8
	voice_programmable_wave_alt 0x0863C18C, 0, 7, 15, 1 @ 0x086207D4
	voice_programmable_wave_alt 0x0863C19C, 0, 7, 15, 1 @ 0x086207E0
	voice_programmable_wave_alt 0x0863C1AC, 0, 7, 15, 1 @ 0x086207EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086207F8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_087_JP_086C59C8, 255, 235, 0, 204 @ 0x08620804
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620810
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 165, 90, 216 @ 0x0862081C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620828
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620834
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620840
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862084C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620858
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620864
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620870
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862087C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620888
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620894
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086208A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086208AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086208B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086208C4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_057_JP_08690728, 255, 0, 255, 195 @ 0x086208D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086208DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086208E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086208F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620900
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862090C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 188 @ 0x08620918
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_003_JP_0863EE90, 255, 235, 128, 99 @ 0x08620924
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620930
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 115 @ 0x0862093C
	voice_programmable_wave_alt 0x0863C1DC, 0, 7, 15, 1 @ 0x08620948
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620954
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620960
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862096C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620978
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620984
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620990
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862099C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 180, 246 @ 0x086209A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086209B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086209C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086209CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086209D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086209E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086209F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086209FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620A08
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08620A14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620A20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620A2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620A38
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08620A44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620A50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620A5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620A68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620A74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620A80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620A8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620A98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620AA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620AB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620ABC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620AC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620AD4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 127 @ 0x08620AE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620AEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620AF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620B04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620B10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620B1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620B28
	voice_square_1_alt 0, 2, 0, 7, 7, 0 @ 0x08620B34
	voice_square_2_alt 2, 0, 7, 7, 0 @ 0x08620B40
	voice_square_2_alt 1, 0, 7, 7, 0 @ 0x08620B4C
	voice_square_2_alt 0, 0, 7, 7, 0 @ 0x08620B58
	voice_square_2_alt 3, 0, 7, 7, 0 @ 0x08620B64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620B70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620B7C
	voice_programmable_wave_alt 0x0863C1CC, 0, 7, 15, 1 @ 0x08620B88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620B94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620BA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620BAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620BB8
	voice_square_1_alt 0, 1, 0, 7, 7, 0 @ 0x08620BC4
	voice_square_1_alt 0, 0, 0, 7, 7, 0 @ 0x08620BD0
	voice_square_1_alt 0, 3, 0, 7, 7, 0 @ 0x08620BDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620BE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620BF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620C00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620C0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620C18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620C24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620C30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620C3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620C48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620C54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620C60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620C6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620C78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620C84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620C90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620C9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620CA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620CB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620CC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620CCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620CD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620CE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620CF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620CFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620D08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620D14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620D20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620D2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620D38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620D44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620D50
	voice_noise_alt 0, 0, 1, 7, 1 @ 0x08620D5C
	voice_noise_alt 0, 0, 2, 6, 1 @ 0x08620D68
VoiceGroup_JP_08620D74: @ 0x08620D74
	voice_keysplit_all 0x085FDB0C @ 0x08620D74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620D80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620D8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620D98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620DA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620DB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620DBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620DC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620DD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620DE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620DEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620DF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620E04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620E10
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 216, 90, 242 @ 0x08620E1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620E28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620E34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620E40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620E4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620E58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620E64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620E70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620E7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620E88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620E94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620EA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620EAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620EB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620EC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620ED0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620EDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620EE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620EF4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_053_JP_086874E4, 255, 253, 0, 149 @ 0x08620F00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620F0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620F18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620F24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620F30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620F3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620F48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620F54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620F60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620F6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620F78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620F84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620F90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620F9C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 246, 0, 226 @ 0x08620FA8
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08620FB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620FC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620FCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620FD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620FE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620FF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08620FFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621008
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08621014
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621020
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862102C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621038
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08621044
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621050
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862105C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621068
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621074
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621080
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862108C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621098
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086210A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086210B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086210BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086210C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086210D4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 165 @ 0x086210E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086210EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086210F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621104
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621110
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862111C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621128
	voice_square_2 3, 0, 1, 7, 1 @ 0x08621134
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621140
	voice_square_1 0, 3, 0, 1, 7, 1 @ 0x0862114C
	voice_square_1 0, 3, 0, 0, 7, 1 @ 0x08621158
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621164
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621170
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862117C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621188
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621194
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086211A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086211AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086211B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086211C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086211D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086211DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086211E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086211F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621200
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862120C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621218
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621224
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621230
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862123C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621248
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621254
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621260
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862126C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621278
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621284
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621290
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862129C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086212A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086212B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086212C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086212CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086212D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086212E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086212F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086212FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621308
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621314
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621320
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862132C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621338
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621344
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621350
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862135C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_024_JP_08652DDC, 255, 246, 0, 216 @ 0x08621368
VoiceGroup_JP_08621374: @ 0x08621374
	voice_keysplit_all 0x085FDC68 @ 0x08621374
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x08621380
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862138C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621398
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_065_JP_086A42F0, 128, 249, 0, 188 @ 0x086213A4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_066_JP_086A6958, 255, 188, 103, 165 @ 0x086213B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086213BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086213C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086213D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086213E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086213EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086213F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621404
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621410
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 165, 90, 216 @ 0x0862141C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621428
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621434
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 127 @ 0x08621440
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862144C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621458
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621464
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621470
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862147C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621488
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 128, 249, 25, 204 @ 0x08621494
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 165, 128, 204 @ 0x086214A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086214AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086214B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086214C4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_057_JP_08690728, 255, 0, 255, 127 @ 0x086214D0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_058_JP_08692598, 255, 165, 154, 165 @ 0x086214DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086214E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086214F4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_053_JP_086874E4, 255, 253, 0, 149 @ 0x08621500
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862150C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 253, 0, 198 @ 0x08621518
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621524
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621530
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 146 @ 0x0862153C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621548
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621554
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621560
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862156C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621578
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621584
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 216, 0, 165 @ 0x08621590
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 242, 51, 242 @ 0x0862159C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 246, 0, 226 @ 0x086215A8
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x086215B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086215C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086215CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086215D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086215E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086215F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086215FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621608
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08621614
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621620
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862162C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621638
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08621644
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621650
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_059_JP_08695588, 255, 165, 180, 165 @ 0x0862165C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621668
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621674
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621680
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862168C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621698
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086216A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086216B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086216BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086216C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086216D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086216E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086216EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086216F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621704
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621710
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862171C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621728
	voice_square_1_alt 0, 1, 0, 2, 7, 2 @ 0x08621734
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621740
	voice_square_2_alt 0, 0, 1, 6, 0 @ 0x0862174C
	voice_square_2_alt 3, 0, 3, 6, 2 @ 0x08621758
	voice_square_2_alt 0, 0, 2, 6, 5 @ 0x08621764
	voice_square_1_alt 0, 0, 0, 1, 6, 0 @ 0x08621770
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862177C
	voice_programmable_wave_alt 0x0863C22C, 0, 7, 15, 1 @ 0x08621788
	voice_programmable_wave_alt 0x0863C0EC, 0, 7, 15, 0 @ 0x08621794
	voice_programmable_wave_alt 0x0863C1CC, 0, 1, 9, 2 @ 0x086217A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086217AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086217B8
	voice_square_2_alt 2, 0, 2, 6, 3 @ 0x086217C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086217D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086217DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086217E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086217F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621800
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862180C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621818
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621824
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621830
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862183C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621848
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621854
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621860
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862186C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621878
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621884
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621890
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862189C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086218A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086218B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086218C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086218CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086218D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086218E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086218F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086218FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621908
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_100_JP_08861AB4, 255, 0, 255, 165 @ 0x08621914
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621920
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862192C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621938
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621944
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621950
	voice_noise_alt 0, 0, 2, 6, 2 @ 0x0862195C
	voice_noise_alt 0, 0, 1, 6, 0 @ 0x08621968
VoiceGroup_JP_08621974: @ 0x08621974
	voice_keysplit_all 0x085FDC68 @ 0x08621974
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x08621980
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862198C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621998
	voice_square_2_alt 3, 0, 2, 6, 5 @ 0x086219A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086219B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086219BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086219C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086219D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086219E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086219EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086219F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621A04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621A10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621A1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621A28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621A34
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 128, 146, 190, 115 @ 0x08621A40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621A4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621A58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621A64
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_090_JP_086C8804, 255, 0, 255, 165 @ 0x08621A70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621A7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621A88
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_099_JP_0885FB44, 255, 165, 128, 216 @ 0x08621A94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621AA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621AAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621AB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621AC4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_057_JP_08690728, 255, 0, 255, 127 @ 0x08621AD0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_058_JP_08692598, 255, 0, 255, 127 @ 0x08621ADC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621AE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621AF4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_053_JP_086874E4, 255, 253, 0, 149 @ 0x08621B00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621B0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621B18
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_010_JP_086466B8, 255, 165, 180, 216 @ 0x08621B24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621B30
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 115 @ 0x08621B3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621B48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621B54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621B60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621B6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621B78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621B84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621B90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621B9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621BA8
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08621BB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621BC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621BCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621BD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621BE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621BF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621BFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621C08
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08621C14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621C20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621C2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621C38
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08621C44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621C50
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_059_JP_08695588, 255, 0, 255, 127 @ 0x08621C5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621C68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621C74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621C80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621C8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621C98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621CA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621CB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621CBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621CC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621CD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621CE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621CEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621CF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621D04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621D10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621D1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621D28
	voice_square_1_alt 0, 1, 0, 2, 7, 2 @ 0x08621D34
	voice_square_2_alt 3, 0, 3, 3, 0 @ 0x08621D40
	voice_programmable_wave_alt 0x0863C22C, 0, 3, 6, 5 @ 0x08621D4C
	voice_square_1_alt 0, 0, 0, 2, 7, 2 @ 0x08621D58
	voice_programmable_wave_alt 0x0863C22C, 0, 7, 15, 0 @ 0x08621D64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621D70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621D7C
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 0 @ 0x08621D88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621D94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621DA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621DAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621DB8
	voice_square_2_alt 2, 0, 2, 6, 3 @ 0x08621DC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621DD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621DDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621DE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621DF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621E00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621E0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621E18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621E24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621E30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621E3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621E48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621E54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621E60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621E6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621E78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621E84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621E90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621E9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621EA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621EB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621EC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621ECC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621ED8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621EE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621EF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621EFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621F08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621F14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621F20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621F2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621F38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621F44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621F50
	voice_noise_alt 0, 0, 2, 6, 0 @ 0x08621F5C
	voice_noise_alt 0, 0, 1, 6, 1 @ 0x08621F68
VoiceGroup_JP_08621F74: @ 0x08621F74
	voice_keysplit_all 0x085FDB0C @ 0x08621F74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621F80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621F8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621F98
	voice_square_2 2, 0, 1, 1, 1 @ 0x08621FA4
	voice_square_1 0, 2, 0, 1, 1, 1 @ 0x08621FB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621FBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621FC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621FD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621FE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621FEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08621FF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622004
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622010
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862201C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622028
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622034
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622040
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862204C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622058
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622064
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622070
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862207C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622088
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622094
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086220A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086220AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086220B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086220C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086220D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086220DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086220E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086220F4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_053_JP_086874E4, 255, 253, 0, 149 @ 0x08622100
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862210C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622118
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622124
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622130
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862213C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622148
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622154
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622160
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862216C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622178
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622184
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622190
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 246, 0, 235 @ 0x0862219C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 246, 0, 226 @ 0x086221A8
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x086221B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086221C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086221CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086221D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086221E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086221F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086221FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622208
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08622214
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622220
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x0862222C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622238
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08622244
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622250
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862225C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622268
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622274
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622280
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862228C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622298
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086222A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086222B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086222BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086222C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086222D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086222E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086222EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086222F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622304
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622310
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862231C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622328
	voice_square_2 3, 0, 1, 7, 1 @ 0x08622334
	voice_programmable_wave_alt 0x0863C10C, 0, 7, 15, 2 @ 0x08622340
VoiceGroup_JP_0862234C: @ 0x0862234C
	voice_keysplit_all 0x085FDB0C @ 0x0862234C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622358
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622364
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622370
	voice_square_2 0, 0, 1, 7, 1 @ 0x0862237C
	voice_square_1 0, 0, 0, 1, 7, 1 @ 0x08622388
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622394
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086223A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086223AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086223B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086223C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086223D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086223DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086223E8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 250, 0, 242 @ 0x086223F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622400
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862240C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 127 @ 0x08622418
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622424
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622430
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862243C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_090_JP_086C8804, 255, 0, 255, 165 @ 0x08622448
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622454
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622460
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862246C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622478
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622484
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622490
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862249C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086224A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086224B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086224C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086224CC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_053_JP_086874E4, 255, 253, 0, 149 @ 0x086224D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086224E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086224F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086224FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622508
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 115 @ 0x08622514
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622520
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862252C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622538
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622544
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622550
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862255C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622568
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 246, 0, 235 @ 0x08622574
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 246, 0, 226 @ 0x08622580
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x0862258C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622598
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086225A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086225B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086225BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086225C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086225D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086225E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086225EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086225F8
	voice_keysplit 0x085FEC28, 0x0863C038 @ 0x08622604
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622610
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x0862261C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622628
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622634
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622640
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862264C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622658
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622664
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622670
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862267C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622688
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622694
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086226A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086226AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086226B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086226C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086226D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086226DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086226E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086226F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622700
	voice_square_2 2, 0, 1, 7, 1 @ 0x0862270C
	voice_programmable_wave_alt 0x0863C10C, 0, 7, 15, 2 @ 0x08622718
	voice_square_1 0, 2, 0, 1, 7, 1 @ 0x08622724
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622730
	voice_programmable_wave_alt 0x0863C13C, 0, 7, 15, 2 @ 0x0862273C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622748
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622754
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622760
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862276C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622778
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_085_JP_086C1CB8, 255, 0, 255, 127 @ 0x08622784
VoiceGroup_JP_08622790: @ 0x08622790
	voice_keysplit_all 0x085FDB0C @ 0x08622790
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x0862279C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086227A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086227B4
	voice_square_2 0, 0, 2, 4, 1 @ 0x086227C0
	voice_square_1 0, 0, 0, 2, 4, 1 @ 0x086227CC
	voice_square_2 3, 0, 1, 7, 1 @ 0x086227D8
	voice_square_1 0, 3, 0, 1, 7, 1 @ 0x086227E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086227F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086227FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622808
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622814
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622820
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862282C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622838
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622844
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622850
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_001_JP_0863DACC, 255, 0, 255, 127 @ 0x0862285C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622868
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622874
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622880
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862288C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622898
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086228A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086228B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086228BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086228C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086228D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086228E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086228EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086228F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622904
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622910
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_053_JP_086874E4, 255, 253, 0, 149 @ 0x0862291C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622928
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622934
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622940
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862294C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622958
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622964
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622970
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862297C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622988
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622994
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086229A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086229AC
	voice_directsound_no_resample 60, 0, DirectSoundWaveData_Instrument_067_JP_086A7D00, 255, 246, 0, 226 @ 0x086229B8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 246, 0, 226 @ 0x086229C4
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x086229D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086229DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086229E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086229F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622A00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622A0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622A18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622A24
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08622A30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622A3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622A48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622A54
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08622A60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622A6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622A78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622A84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622A90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622A9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622AA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622AB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622AC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622ACC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622AD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622AE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622AF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622AFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622B08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622B14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622B20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622B2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622B38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622B44
	voice_square_2 2, 0, 1, 7, 1 @ 0x08622B50
	voice_programmable_wave_alt 0x0863C12C, 0, 7, 15, 2 @ 0x08622B5C
	voice_square_1 0, 2, 0, 1, 7, 1 @ 0x08622B68
	voice_square_2 1, 0, 1, 9, 1 @ 0x08622B74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622B80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622B8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622B98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622BA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622BB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622BBC
	voice_programmable_wave_alt 0x0863C14C, 0, 7, 15, 2 @ 0x08622BC8
VoiceGroup_JP_08622BD4: @ 0x08622BD4
	voice_keysplit_all 0x085FDB0C @ 0x08622BD4
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x08622BE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622BEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622BF8
	voice_square_2 2, 0, 2, 6, 1 @ 0x08622C04
	voice_square_1 0, 2, 0, 2, 6, 1 @ 0x08622C10
	voice_square_2 3, 0, 2, 4, 1 @ 0x08622C1C
	voice_square_1 0, 3, 0, 2, 4, 1 @ 0x08622C28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622C34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622C40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622C4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622C58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622C64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622C70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622C7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622C88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622C94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622CA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622CAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622CB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622CC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622CD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622CDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622CE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622CF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622D00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622D0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622D18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622D24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622D30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622D3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622D48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622D54
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_053_JP_086874E4, 255, 253, 0, 149 @ 0x08622D60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622D6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622D78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622D84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622D90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622D9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622DA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622DB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622DC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622DCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622DD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622DE4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 216, 0, 165 @ 0x08622DF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622DFC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 246, 0, 226 @ 0x08622E08
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08622E14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622E20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622E2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622E38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622E44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622E50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622E5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622E68
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08622E74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622E80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622E8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622E98
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08622EA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622EB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622EBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622EC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622ED4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622EE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622EEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622EF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622F04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622F10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622F1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622F28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622F34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622F40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622F4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622F58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622F64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622F70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622F7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622F88
	voice_square_2 2, 0, 1, 7, 1 @ 0x08622F94
	voice_programmable_wave_alt 0x0863C10C, 0, 7, 15, 2 @ 0x08622FA0
	voice_square_1 0, 2, 0, 1, 7, 1 @ 0x08622FAC
	voice_square_1 0, 2, 0, 0, 7, 1 @ 0x08622FB8
	voice_square_2 3, 0, 1, 7, 1 @ 0x08622FC4
	voice_square_1 0, 3, 0, 1, 7, 1 @ 0x08622FD0
	voice_square_1 0, 3, 0, 0, 7, 1 @ 0x08622FDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622FE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08622FF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623000
	voice_programmable_wave_alt 0x0863C14C, 0, 7, 15, 2 @ 0x0862300C
VoiceGroup_JP_08623018: @ 0x08623018
	voice_keysplit_all 0x085FDB0C @ 0x08623018
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x08623024
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623030
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862303C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623048
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623054
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623060
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862306C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623078
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623084
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623090
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862309C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086230A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086230B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086230C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086230CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086230D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086230E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086230F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086230FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623108
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623114
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623120
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862312C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623138
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623144
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623150
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862315C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623168
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623174
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623180
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862318C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623198
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_053_JP_086874E4, 255, 253, 0, 149 @ 0x086231A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086231B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086231BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086231C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086231D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086231E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086231EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086231F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623204
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623210
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862321C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623228
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 216, 0, 165 @ 0x08623234
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623240
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 246, 0, 226 @ 0x0862324C
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08623258
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623264
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623270
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862327C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623288
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623294
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086232A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086232AC
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x086232B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086232C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086232D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086232DC
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x086232E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086232F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623300
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862330C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623318
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623324
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623330
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862333C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623348
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623354
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623360
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862336C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623378
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 165 @ 0x08623384
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623390
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862339C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086233A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086233B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086233C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086233CC
	voice_square_2 2, 0, 1, 7, 1 @ 0x086233D8
	voice_programmable_wave_alt 0x0863C14C, 0, 7, 15, 2 @ 0x086233E4
	voice_square_1 0, 2, 0, 1, 7, 1 @ 0x086233F0
	voice_square_2 0, 0, 1, 7, 1 @ 0x086233FC
	voice_square_1 0, 0, 0, 1, 7, 1 @ 0x08623408
	voice_square_1 0, 0, 0, 0, 7, 1 @ 0x08623414
VoiceGroup_JP_08623420: @ 0x08623420
	voice_keysplit_all 0x085FDB0C @ 0x08623420
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862342C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623438
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623444
	voice_square_2 1, 0, 1, 6, 1 @ 0x08623450
	voice_square_1 0, 1, 0, 1, 6, 1 @ 0x0862345C
	voice_square_2 2, 0, 1, 6, 1 @ 0x08623468
	voice_square_1 0, 2, 0, 1, 6, 1 @ 0x08623474
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623480
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862348C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623498
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086234A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086234B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086234BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086234C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086234D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086234E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086234EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086234F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623504
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623510
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862351C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623528
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623534
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623540
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862354C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623558
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623564
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623570
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862357C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623588
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623594
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086235A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086235AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086235B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086235C4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_003_JP_0863EE90, 255, 235, 128, 99 @ 0x086235D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086235DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086235E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086235F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623600
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862360C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623618
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623624
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623630
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 216, 0, 165 @ 0x0862363C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623648
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 246, 0, 226 @ 0x08623654
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08623660
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862366C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623678
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623684
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623690
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862369C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086236A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086236B4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_085_JP_086C1CB8, 255, 165, 154, 127 @ 0x086236C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086236CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086236D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086236E4
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x086236F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086236FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623708
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623714
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623720
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862372C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623738
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623744
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623750
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862375C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623768
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623774
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623780
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862378C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623798
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086237A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086237B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086237BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086237C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086237D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086237E0
	voice_programmable_wave_alt 0x0863C10C, 0, 7, 15, 2 @ 0x086237EC
	voice_square_1 0, 3, 0, 1, 9, 1 @ 0x086237F8
	voice_square_1 0, 3, 0, 0, 9, 1 @ 0x08623804
VoiceGroup_JP_08623810: @ 0x08623810
	voice_keysplit_all 0x085FDB0C @ 0x08623810
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862381C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623828
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623834
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623840
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862384C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623858
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623864
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623870
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862387C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623888
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623894
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086238A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086238AC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 216, 90, 242 @ 0x086238B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086238C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086238D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086238DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086238E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086238F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623900
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862390C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623918
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623924
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623930
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862393C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623948
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623954
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623960
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862396C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623978
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623984
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623990
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_053_JP_086874E4, 255, 253, 0, 149 @ 0x0862399C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086239A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086239B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086239C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086239CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086239D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086239E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086239F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086239FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623A08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623A14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623A20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623A2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623A38
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 246, 0, 226 @ 0x08623A44
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08623A50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623A5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623A68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623A74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623A80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623A8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623A98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623AA4
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x08623AB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623ABC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623AC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623AD4
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x08623AE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623AEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623AF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623B04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623B10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623B1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623B28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623B34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623B40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623B4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623B58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623B64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623B70
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_052_JP_08686D80, 255, 0, 255, 165 @ 0x08623B7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623B88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623B94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623BA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623BAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623BB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623BC4
	voice_square_2 3, 0, 1, 7, 1 @ 0x08623BD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623BDC
	voice_square_1 0, 3, 0, 1, 7, 1 @ 0x08623BE8
	voice_square_1 0, 3, 0, 0, 7, 1 @ 0x08623BF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623C00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623C0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623C18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623C24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623C30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623C3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623C48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623C54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623C60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623C6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623C78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623C84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623C90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623C9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623CA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623CB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623CC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623CCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623CD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623CE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623CF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623CFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623D08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623D14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623D20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623D2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623D38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623D44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623D50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623D5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623D68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623D74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623D80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623D8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623D98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623DA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623DB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623DBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623DC8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623DD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623DE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623DEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623DF8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_024_JP_08652DDC, 255, 246, 0, 216 @ 0x08623E04
VoiceGroup_JP_08623E10: @ 0x08623E10
	voice_keysplit_all 0x085FDB0C @ 0x08623E10
	voice_keysplit 0x085FE5B0, 0x0863BF54 @ 0x08623E1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623E28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623E34
	voice_square_2 2, 0, 2, 3, 1 @ 0x08623E40
	voice_square_1 0, 2, 0, 2, 3, 1 @ 0x08623E4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623E58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623E64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623E70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623E7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623E88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623E94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623EA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623EAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623EB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623EC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623ED0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623EDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623EE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623EF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623F00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623F0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623F18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623F24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623F30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623F3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623F48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623F54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623F60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623F6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623F78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623F84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623F90
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_053_JP_086874E4, 255, 253, 0, 149 @ 0x08623F9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623FA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623FB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623FC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623FCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623FD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623FE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623FF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08623FFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624008
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624014
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624020
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862402C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 246, 0, 235 @ 0x08624038
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 246, 0, 226 @ 0x08624044
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08624050
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862405C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624068
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624074
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624080
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862408C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624098
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086240A4
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x086240B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086240BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086240C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086240D4
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x086240E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086240EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086240F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624104
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624110
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862411C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624128
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624134
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624140
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862414C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624158
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624164
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624170
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862417C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624188
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624194
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086241A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086241AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086241B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086241C4
	voice_square_2 3, 0, 1, 7, 1 @ 0x086241D0
	voice_programmable_wave_alt 0x0863C10C, 0, 7, 15, 2 @ 0x086241DC
	voice_square_1 0, 3, 0, 1, 7, 1 @ 0x086241E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086241F4
	voice_square_2 2, 0, 1, 7, 1 @ 0x08624200
	voice_square_1 0, 2, 0, 1, 7, 1 @ 0x0862420C
	voice_square_2 3, 0, 2, 7, 1 @ 0x08624218
VoiceGroup_JP_08624224: @ 0x08624224
	voice_keysplit_all 0x085FDB0C @ 0x08624224
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624230
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862423C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624248
	voice_square_2 2, 0, 2, 3, 1 @ 0x08624254
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624260
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862426C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624278
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624284
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624290
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862429C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086242A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086242B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086242C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086242CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086242D8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086242E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086242F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086242FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624308
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624314
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624320
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862432C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624338
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624344
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624350
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862435C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624368
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624374
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624380
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862438C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624398
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086243A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086243B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086243BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086243C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086243D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086243E0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 252, 0, 115 @ 0x086243EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086243F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624404
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624410
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862441C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624428
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624434
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624440
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862444C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 246, 0, 226 @ 0x08624458
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08624464
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624470
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862447C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624488
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624494
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086244A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086244AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086244B8
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x086244C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086244D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086244DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086244E8
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x086244F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624500
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862450C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624518
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624524
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624530
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862453C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624548
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624554
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624560
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862456C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624578
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624584
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624590
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862459C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086245A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086245B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086245C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086245CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086245D8
	voice_square_2 3, 0, 1, 7, 1 @ 0x086245E4
	voice_programmable_wave_alt 0x0863C10C, 0, 7, 15, 2 @ 0x086245F0
	voice_square_1 0, 3, 0, 1, 7, 1 @ 0x086245FC
	voice_square_1 0, 3, 0, 0, 7, 1 @ 0x08624608
VoiceGroup_JP_08624614: @ 0x08624614
	voice_keysplit_all 0x085FDB0C @ 0x08624614
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624620
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862462C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624638
	voice_square_2 0, 1, 1, 7, 1 @ 0x08624644
	voice_square_1 0, 0, 1, 1, 7, 1 @ 0x08624650
	voice_square_1 0, 0, 0, 0, 7, 1 @ 0x0862465C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624668
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624674
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624680
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862468C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624698
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086246A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086246B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086246BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086246C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086246D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086246E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086246EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086246F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624704
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624710
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862471C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624728
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624734
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624740
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862474C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624758
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624764
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624770
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862477C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624788
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624794
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_003_JP_0863EE90, 255, 235, 128, 99 @ 0x086247A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086247AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086247B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086247C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086247D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086247DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086247E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086247F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624800
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862480C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624818
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624824
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624830
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862483C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 246, 0, 226 @ 0x08624848
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08624854
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624860
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862486C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624878
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624884
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624890
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862489C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086248A8
	voice_keysplit 0x085FE604, 0x0863BFE4 @ 0x086248B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086248C0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086248CC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086248D8
	voice_keysplit 0x085FEC40, 0x0863C080 @ 0x086248E4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086248F0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086248FC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624908
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624914
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624920
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862492C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624938
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624944
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624950
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862495C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624968
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624974
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624980
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862498C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624998
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086249A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086249B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086249BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086249C8
	voice_square_2 3, 1, 1, 6, 1 @ 0x086249D4
	voice_programmable_wave_alt 0x0863C10C, 0, 7, 15, 2 @ 0x086249E0
	voice_square_1 0, 3, 1, 1, 6, 1 @ 0x086249EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086249F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624A04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624A10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624A1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624A28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624A34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624A40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624A4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624A58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624A64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624A70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624A7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624A88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624A94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624AA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624AAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624AB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624AC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624AD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624ADC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624AE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624AF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624B00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624B0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624B18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624B24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624B30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624B3C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624B48
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624B54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624B60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624B6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624B78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624B84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624B90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624B9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624BA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624BB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624BC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624BCC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624BD8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624BE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624BF0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_024_JP_08652DDC, 255, 235, 0, 216 @ 0x08624BFC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_024_JP_08652DDC, 255, 246, 0, 216 @ 0x08624C08
VoiceGroup_JP_08624C14: @ 0x08624C14
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_068_JP_086A91D0, 255, 249, 103, 165 @ 0x08624C14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624C20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624C2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624C38
	voice_square_1_alt 0, 2, 0, 2, 0, 0 @ 0x08624C44
	voice_square_1_alt 0, 0, 0, 2, 0, 1 @ 0x08624C50
	voice_square_1_alt 0, 2, 0, 4, 0, 1 @ 0x08624C5C
	voice_square_1_alt 44, 2, 0, 4, 0, 0 @ 0x08624C68
	voice_square_1_alt 38, 0, 0, 4, 0, 0 @ 0x08624C74
	voice_square_1_alt 0, 0, 0, 7, 0, 0 @ 0x08624C80
	voice_square_1_alt 0, 2, 2, 0, 15, 0 @ 0x08624C8C
	voice_square_1_alt 0, 1, 2, 0, 15, 0 @ 0x08624C98
	voice_square_1_alt 23, 1, 0, 1, 9, 0 @ 0x08624CA4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_069_JP_086A9BDC, 255, 0, 255, 165 @ 0x08624CB0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_069_JP_086A9BDC, 255, 226, 0, 165 @ 0x08624CBC
	voice_square_1_alt 0, 2, 0, 6, 0, 1 @ 0x08624CC8
	voice_square_1_alt 36, 0, 0, 2, 0, 0 @ 0x08624CD4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624CE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624CEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624CF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624D04
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624D10
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624D1C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624D28
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624D34
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624D40
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624D4C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624D58
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624D64
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624D70
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624D7C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624D88
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624D94
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624DA0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624DAC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624DB8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624DC4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624DD0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624DDC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624DE8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624DF4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624E00
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624E0C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624E18
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624E24
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624E30
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624E3C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 246, 0, 226 @ 0x08624E48
	voice_keysplit 0x085FE5E0, 0x0863BF9C @ 0x08624E54
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624E60
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624E6C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624E78
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624E84
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624E90
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624E9C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624EA8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624EB4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624EC0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624ECC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624ED8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624EE4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624EF0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624EFC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624F08
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624F14
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624F20
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624F2C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624F38
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624F44
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624F50
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624F5C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624F68
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624F74
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624F80
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624F8C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624F98
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624FA4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624FB0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624FBC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624FC8
	voice_square_2_alt 3, 0, 1, 0, 1 @ 0x08624FD4
	voice_square_1_alt 0, 3, 0, 1, 0, 1 @ 0x08624FE0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624FEC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08624FF8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625004
	voice_square_1_alt 46, 2, 0, 4, 0, 0 @ 0x08625010
	voice_square_1_alt 38, 2, 0, 4, 0, 0 @ 0x0862501C
	voice_square_1_alt 119, 2, 0, 0, 15, 1 @ 0x08625028
	voice_square_1_alt 0, 2, 0, 0, 15, 1 @ 0x08625034
	voice_square_1_alt 106, 2, 0, 2, 0, 0 @ 0x08625040
	voice_square_1_alt 23, 2, 0, 1, 9, 0 @ 0x0862504C
	voice_square_1_alt 21, 2, 0, 1, 9, 0 @ 0x08625058
	voice_square_1_alt 0, 0, 0, 0, 15, 1 @ 0x08625064
	voice_square_1_alt 47, 2, 0, 2, 6, 0 @ 0x08625070
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862507C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625088
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625094
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086250A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086250AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086250B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086250C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086250D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086250DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086250E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086250F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625100
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862510C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625118
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625124
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625130
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862513C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625148
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625154
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625160
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862516C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625178
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625184
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625190
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862519C
	voice_noise 0, 0, 7, 15, 0 @ 0x086251A8
	voice_noise 0, 2, 7, 15, 0 @ 0x086251B4
	voice_noise_alt 0, 2, 0, 15, 0 @ 0x086251C0
	voice_noise_alt 1, 0, 0, 15, 0 @ 0x086251CC
	voice_noise_alt 0, 0, 0, 15, 0 @ 0x086251D8
	voice_noise_alt 0, 0, 3, 0, 0 @ 0x086251E4
	voice_noise_alt 0, 0, 2, 0, 0 @ 0x086251F0
	voice_noise_alt 0, 0, 1, 0, 0 @ 0x086251FC
	voice_noise_alt 0, 0, 1, 0, 1 @ 0x08625208
VoiceGroup_JP_08625214: @ 0x08625214
	voice_directsound_no_resample 60, 0, DirectSoundWaveData_Instrument_070_JP_086AB7F0, 255, 249, 0, 165 @ 0x08625214
	voice_directsound_alt 60, 0, DirectSoundWaveData_Instrument_070_JP_086AB7F0, 255, 0, 255, 165 @ 0x08625220
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_068_JP_086A91D0, 255, 0, 255, 165 @ 0x0862522C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_000_JP_0863D428, 255, 242, 0, 127 @ 0x08625238
	voice_noise_alt 0, 0, 1, 0, 1 @ 0x08625244
	voice_noise_alt 1, 0, 1, 0, 1 @ 0x08625250
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_005_JP_08640A3C, 255, 0, 255, 165 @ 0x0862525C
	voice_square_1_alt 0, 2, 0, 2, 0, 1 @ 0x08625268
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_071_JP_086AD150, 255, 0, 255, 165 @ 0x08625274
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 0, 255, 127 @ 0x08625280
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_073_JP_086AED50, 255, 0, 255, 127 @ 0x0862528C
	voice_noise_alt 1, 0, 2, 0, 0 @ 0x08625298
	voice_square_1 103, 3, 2, 7, 0, 0 @ 0x086252A4
	voice_square_2 3, 2, 7, 0, 0 @ 0x086252B0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_069_JP_086A9BDC, 255, 226, 0, 127 @ 0x086252BC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_074_JP_086B0940, 255, 0, 255, 0 @ 0x086252C8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_069_JP_086A9BDC, 255, 204, 0, 127 @ 0x086252D4
	voice_square_1_alt 0, 2, 0, 2, 0, 1 @ 0x086252E0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_075_JP_086B1CF4, 255, 0, 255, 127 @ 0x086252EC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_069_JP_086A9BDC, 255, 0, 255, 127 @ 0x086252F8
	voice_square_1 103, 0, 0, 7, 0, 0 @ 0x08625304
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_017_JP_0864E1B4, 255, 0, 255, 127 @ 0x08625310
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_076_JP_086B4378, 255, 0, 255, 127 @ 0x0862531C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_077_JP_086B55BC, 255, 0, 255, 127 @ 0x08625328
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_015_JP_0864D230, 255, 0, 255, 127 @ 0x08625334
	voice_noise_alt 0, 0, 7, 15, 1 @ 0x08625340
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_078_JP_086B65CC, 255, 0, 255, 127 @ 0x0862534C
	voice_noise_alt 1, 0, 7, 15, 1 @ 0x08625358
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_000_JP_0863D428, 255, 246, 0, 127 @ 0x08625364
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_079_JP_086B78D4, 255, 0, 255, 127 @ 0x08625370
	voice_square_1_alt 19, 2, 0, 2, 0, 0 @ 0x0862537C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_080_JP_086B99E0, 255, 0, 255, 127 @ 0x08625388
	voice_square_1 103, 0, 0, 0, 15, 0 @ 0x08625394
	voice_directsound_alt 60, 0, DirectSoundWaveData_Instrument_079_JP_086B78D4, 255, 0, 255, 127 @ 0x086253A0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_002_JP_0863E2C4, 255, 255, 255, 127 @ 0x086253AC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_004_JP_0863FDC8, 255, 0, 255, 127 @ 0x086253B8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_081_JP_086BB9BC, 255, 0, 255, 127 @ 0x086253C4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_080_JP_086B99E0, 255, 242, 0, 0 @ 0x086253D0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_082_JP_086BDBCC, 255, 0, 255, 0 @ 0x086253DC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 165, 90, 216 @ 0x086253E8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_019_JP_0864FA6C, 255, 127, 0, 188 @ 0x086253F4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_084_JP_086BFD08, 255, 249, 0, 165 @ 0x08625400
	voice_square_1 0, 0, 4, 6, 0, 0 @ 0x0862540C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_000_JP_0863D428, 13, 0, 255, 127 @ 0x08625418
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 13, 0, 255, 127 @ 0x08625424
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_085_JP_086C1CB8, 255, 0, 255, 127 @ 0x08625430
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_086_JP_086C4F98, 255, 252, 0, 204 @ 0x0862543C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625448
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_087_JP_086C59C8, 255, 235, 0, 204 @ 0x08625454
	voice_square_1 0, 0, 4, 0, 15, 0 @ 0x08625460
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_087_JP_086C59C8, 255, 188, 0, 0 @ 0x0862546C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_083_JP_086BE398, 255, 226, 0, 127 @ 0x08625478
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_024_JP_08652DDC, 26, 0, 255, 127 @ 0x08625484
	voice_square_1_alt 0, 2, 0, 1, 0, 0 @ 0x08625490
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_000_JP_0863D428, 255, 252, 0, 127 @ 0x0862549C
	voice_square_1_alt 0, 1, 0, 2, 0, 0 @ 0x086254A8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_072_JP_086AE614, 255, 127, 0, 127 @ 0x086254B4
	voice_noise_alt 0, 1, 6, 0, 0 @ 0x086254C0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_003_JP_0863EE90, 255, 255, 255, 127 @ 0x086254CC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_016_JP_0864D924, 255, 255, 255, 127 @ 0x086254D8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_088_JP_086C63FC, 255, 255, 255, 127 @ 0x086254E4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_051_JP_086827FC, 11, 242, 0, 127 @ 0x086254F0
	voice_square_1_alt 0, 2, 4, 6, 0, 0 @ 0x086254FC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_089_JP_086C7F3C, 255, 255, 255, 127 @ 0x08625508
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_090_JP_086C8804, 255, 0, 255, 165 @ 0x08625514
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_018_JP_0864EA2C, 255, 0, 255, 165 @ 0x08625520
	voice_noise_alt 0, 5, 7, 15, 1 @ 0x0862552C
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_069_JP_086A9BDC, 128, 242, 0, 165 @ 0x08625538
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_043_JP_08670108, 255, 0, 255, 165 @ 0x08625544
	voice_square_1 0, 0, 1, 5, 0, 0 @ 0x08625550
	voice_noise_alt 0, 6, 6, 0, 1 @ 0x0862555C
	voice_noise_alt 0, 3, 6, 0, 1 @ 0x08625568
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625574
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_080_JP_086B99E0, 15, 127, 231, 127 @ 0x08625580
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862558C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625598
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086255A4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086255B0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086255BC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086255C8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086255D4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086255E0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086255EC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086255F8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625604
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625610
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862561C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625628
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625634
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625640
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862564C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625658
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625664
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625670
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862567C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625688
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625694
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086256A0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086256AC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086256B8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086256C4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086256D0
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086256DC
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086256E8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086256F4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625700
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862570C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625718
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625724
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625730
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862573C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625748
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625754
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625760
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862576C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625778
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625784
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x08625790
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x0862579C
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086257A8
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086257B4
	voice_square_1 0, 2, 0, 0, 15, 0 @ 0x086257C0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_091_JP_086C9BD4, 255, 0, 255, 165 @ 0x086257CC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_092_JP_086CA7E4, 255, 0, 255, 165 @ 0x086257D8
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_093_JP_086CB374, 255, 0, 255, 165 @ 0x086257E4
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_094_JP_086CBE10, 255, 0, 255, 165 @ 0x086257F0
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_095_JP_086CC758, 255, 0, 255, 165 @ 0x086257FC
	voice_directsound 60, 0, DirectSoundWaveData_Instrument_096_JP_086CD1A0, 255, 0, 255, 165 @ 0x08625808
