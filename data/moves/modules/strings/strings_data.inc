.if .L__inc_fragment_select_7d1b860d3ed6 == 1

	@ src/strings.c:272 gText_PkmnLearnedMove3
	.globl gText_PkmnLearnedMove3_Copy_Moves
gText_PkmnLearnedMove3_Copy_Moves: @ 0x085AD9C0
	.string "{STR_VAR_1}は あたらしく\n{STR_VAR_2}を おぼえた!{EOS}"
	.if (. - gText_PkmnLearnedMove3_Copy_Moves) > 0x14
	.error "gText_PkmnLearnedMove3_Copy_Moves may not grow beyond its original slot"
	.endif
	.if (. - gText_PkmnLearnedMove3_Copy_Moves) < 0x14
	.space 0x14 - (. - gText_PkmnLearnedMove3_Copy_Moves)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085AD9D4: move_relearner.s: DoMoveRelearnerMain
	.globl gMoveRelearnerData_085AD9D4
gMoveRelearnerData_085AD9D4: @ 0x085AD9D4
	@ analyzed canonical ROM range 0x085AD9D4-0x085ADA26
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x53 bytes=83
	.byte 0xFD, 0x02, 0x1A, 0x00, 0x01, 0x10, 0x27, 0x0C, 0x08, 0x00, 0xFE, 0xFD, 0x03, 0x2D, 0x00, 0x05
	.byte 0x4A, 0x04, 0x10, 0x02, 0xB0, 0xAB, 0xFB, 0x0C, 0x06, 0x0C, 0x00, 0xFD, 0x02, 0x1A, 0x00, 0x2C
	.byte 0x3C, 0x2D, 0x00, 0xA5, 0x12, 0xFE, 0x05, 0x4A, 0x04, 0x13, 0x02, 0x29, 0x19, 0x44, 0x00, 0x0E
	.byte 0x02, 0x02, 0x50, 0x4B, 0x02, 0x41, 0xAB, 0xFB, 0xFD, 0x03, 0x19, 0x00, 0x06, 0x2C, 0x28, 0x16
	.byte 0x00, 0x1E, 0x06, 0x19, 0x00, 0x2C, 0x3C, 0x2D, 0xFE, 0x2C, 0x0D, 0x2A, 0x0B, 0x0E, 0x1F, 0x0D
	.byte 0x06, 0xAC, 0xFF

	@ src/strings.c:276 gText_StopLearningMove2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_StopLearningMove2_Copy_Moves
gText_StopLearningMove2_Copy_Moves: @ 0x085ADA27
	.string "それでは…… {STR_VAR_2}を\nおぼえるのを あきらめますか?{EOS}"
	.if (. - gText_StopLearningMove2_Copy_Moves) != 0x1b
	.error "gText_StopLearningMove2_Copy_Moves must retain its original byte length"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085ADA42: move_relearner.s: DoMoveRelearnerMain
	.globl gMoveRelearnerData_085ADA42
gMoveRelearnerData_085ADA42: @ 0x085ADA42
	@ analyzed canonical ROM range 0x085ADA42-0x085ADA44
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x3 bytes=3
	.byte 0xFC, 0x08, 0x20
	.globl gText_Rom_5ADA45
gText_Rom_5ADA45: @ 0x085ADA45
	.string "1 {PAUSE 15}2の {PAUSE 15}…{PAUSE 15}…{PAUSE 15}… {PAUSE 15}{PLAY_SE SE_BALL_BOUNCE_1}ポカン!\p{EOS}"
	.if (. - gText_Rom_5ADA45) > 0x22
	.error "gText_Rom_5ADA45 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ADA45) < 0x22
	.space 0x22 - (. - gText_Rom_5ADA45)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085ADA67: move_relearner.s: DoMoveRelearnerMain
	.globl gMoveRelearnerData_085ADA67
gMoveRelearnerData_085ADA67: @ 0x085ADA67
	@ analyzed canonical ROM range 0x085ADA67-0x085ADA86
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x20 entries=16
	.2byte 0x02FD, 0x001A, 0x04FD, 0x0019, 0x0612, 0x0602, 0x2D10, 0x07FE
	.2byte 0x022A, 0x0016, 0x0D2C, 0x102A, 0xFBAB, 0x0C0F, 0xB013, 0xFBAB
	.globl gText_Rom_5ADA87
gText_Rom_5ADA87: @ 0x085ADA87
	.string "{STR_VAR_1}は あたらしく\n{STR_VAR_2}を おぼえた!{EOS}"
	.if (. - gText_Rom_5ADA87) > 0x14
	.error "gText_Rom_5ADA87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ADA87) < 0x14
	.space 0x14 - (. - gText_Rom_5ADA87)
	.endif
	@ Decoded text from ROM range: offset=0x5ADA9B, size=0x14
	.string "{STR_VAR_1}は　{STR_VAR_2}を　おぼえずに　おわった！{EOS}"
.elseif .L__inc_fragment_select_7d1b860d3ed6 == 2
	@ src/strings.c:75 gText_DexHoennTitle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_DexHoennTitle
gText_DexHoennTitle: @ 0x085C9103
	.string "ホウエン ずかん{EOS}"
	.if (. - gText_DexHoennTitle) != 0x9
	.error "gText_DexHoennTitle must retain its original byte length"
	.endif

	@ src/strings.c:76 gText_DexNatTitle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_DexNatTitle
gText_DexNatTitle: @ 0x085C910C
	.string "ぜんこく ずかん{EOS}"
	.if (. - gText_DexNatTitle) != 0x9
	.error "gText_DexNatTitle must retain its original byte length"
	.endif

	@ src/strings.c:77 gText_DexSortNumericalTitle
	.globl gText_DexSortNumericalTitle
gText_DexSortNumericalTitle: @ 0x085C9115
	.string "ばんごう じゅん{EOS}"
	.if (. - gText_DexSortNumericalTitle) > 0x9
	.error "gText_DexSortNumericalTitle may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSortNumericalTitle) < 0x9
	.space 0x9 - (. - gText_DexSortNumericalTitle)
	.endif

	@ src/strings.c:78 gText_DexSortAtoZTitle
	.globl gText_DexSortAtoZTitle
gText_DexSortAtoZTitle: @ 0x085C911E
	.string "ごじゅうおん じゅん{EOS}"
	.if (. - gText_DexSortAtoZTitle) > 0xb
	.error "gText_DexSortAtoZTitle may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSortAtoZTitle) < 0xb
	.space 0xb - (. - gText_DexSortAtoZTitle)
	.endif

	@ src/strings.c:79 gText_DexSortHeaviestTitle
	.globl gText_DexSortHeaviestTitle
gText_DexSortHeaviestTitle: @ 0x085C9129
	.string "おもい じゅん{EOS}"
	.if (. - gText_DexSortHeaviestTitle) > 0x8
	.error "gText_DexSortHeaviestTitle may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSortHeaviestTitle) < 0x8
	.space 0x8 - (. - gText_DexSortHeaviestTitle)
	.endif

	@ src/strings.c:80 gText_DexSortLightestTitle
	.globl gText_DexSortLightestTitle
gText_DexSortLightestTitle: @ 0x085C9131
	.string "かるい じゅん{EOS}"
	.if (. - gText_DexSortLightestTitle) > 0x8
	.error "gText_DexSortLightestTitle may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSortLightestTitle) < 0x8
	.space 0x8 - (. - gText_DexSortLightestTitle)
	.endif

	@ src/strings.c:81 gText_DexSortTallestTitle
	.globl gText_DexSortTallestTitle
gText_DexSortTallestTitle: @ 0x085C9139
	.string "たかい じゅん{EOS}"
	.if (. - gText_DexSortTallestTitle) > 0x8
	.error "gText_DexSortTallestTitle may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSortTallestTitle) < 0x8
	.space 0x8 - (. - gText_DexSortTallestTitle)
	.endif

	@ src/strings.c:82 gText_DexSortSmallestTitle
	.globl gText_DexSortSmallestTitle
gText_DexSortSmallestTitle: @ 0x085C9141
	.string "ひくい じゅん{EOS}"
	.if (. - gText_DexSortSmallestTitle) > 0x8
	.error "gText_DexSortSmallestTitle may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSortSmallestTitle) < 0x8
	.space 0x8 - (. - gText_DexSortSmallestTitle)
	.endif

	@ src/strings.c:83 gText_DexSearchAlphaABC
	.globl gText_DexSearchAlphaABC
gText_DexSearchAlphaABC: @ 0x085C9149
	.string "あいうえお{EOS}"
	.if (. - gText_DexSearchAlphaABC) > 0x6
	.error "gText_DexSearchAlphaABC may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaABC) < 0x6
	.space 0x6 - (. - gText_DexSearchAlphaABC)
	.endif

	@ src/strings.c:84 gText_DexSearchAlphaDEF
	.globl gText_DexSearchAlphaDEF
gText_DexSearchAlphaDEF: @ 0x085C914F
	.string "かきくけこ{EOS}"
	.if (. - gText_DexSearchAlphaDEF) > 0x6
	.error "gText_DexSearchAlphaDEF may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaDEF) < 0x6
	.space 0x6 - (. - gText_DexSearchAlphaDEF)
	.endif

	@ src/strings.c:85 gText_DexSearchAlphaGHI
	.globl gText_DexSearchAlphaGHI
gText_DexSearchAlphaGHI: @ 0x085C9155
	.string "さしすせそ{EOS}"
	.if (. - gText_DexSearchAlphaGHI) > 0x6
	.error "gText_DexSearchAlphaGHI may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaGHI) < 0x6
	.space 0x6 - (. - gText_DexSearchAlphaGHI)
	.endif

	@ src/strings.c:86 gText_DexSearchAlphaJKL
	.globl gText_DexSearchAlphaJKL
gText_DexSearchAlphaJKL: @ 0x085C915B
	.string "たちつてと{EOS}"
	.if (. - gText_DexSearchAlphaJKL) > 0x6
	.error "gText_DexSearchAlphaJKL may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaJKL) < 0x6
	.space 0x6 - (. - gText_DexSearchAlphaJKL)
	.endif

	@ src/strings.c:87 gText_DexSearchAlphaMNO
	.globl gText_DexSearchAlphaMNO
gText_DexSearchAlphaMNO: @ 0x085C9161
	.string "なにぬねの{EOS}"
	.if (. - gText_DexSearchAlphaMNO) > 0x6
	.error "gText_DexSearchAlphaMNO may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaMNO) < 0x6
	.space 0x6 - (. - gText_DexSearchAlphaMNO)
	.endif

	@ src/strings.c:88 gText_DexSearchAlphaPQR
	.globl gText_DexSearchAlphaPQR
gText_DexSearchAlphaPQR: @ 0x085C9167
	.string "はひふへほ{EOS}"
	.if (. - gText_DexSearchAlphaPQR) > 0x6
	.error "gText_DexSearchAlphaPQR may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaPQR) < 0x6
	.space 0x6 - (. - gText_DexSearchAlphaPQR)
	.endif

	@ src/strings.c:89 gText_DexSearchAlphaSTU
	.globl gText_DexSearchAlphaSTU
gText_DexSearchAlphaSTU: @ 0x085C916D
	.string "まみむめも{EOS}"
	.if (. - gText_DexSearchAlphaSTU) > 0x6
	.error "gText_DexSearchAlphaSTU may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaSTU) < 0x6
	.space 0x6 - (. - gText_DexSearchAlphaSTU)
	.endif

.elseif .L__inc_fragment_select_7d1b860d3ed6 == 3
	@ src/strings.c:90 gText_DexSearchAlphaVWX
	.globl gText_DexSearchAlphaVWX
gText_DexSearchAlphaVWX: @ 0x085C9173
	.string "らりるれろ{EOS}"
	.if (. - gText_DexSearchAlphaVWX) > 0x6
	.error "gText_DexSearchAlphaVWX may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaVWX) < 0x6
	.space 0x6 - (. - gText_DexSearchAlphaVWX)
	.endif

	@ src/strings.c:91 gText_DexSearchAlphaYZ
	.globl gText_DexSearchAlphaYZ
gText_DexSearchAlphaYZ: @ 0x085C9179
	.string "やゆよわをん{EOS}"
	.if (. - gText_DexSearchAlphaYZ) > 0x7
	.error "gText_DexSearchAlphaYZ may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaYZ) < 0x7
	.space 0x7 - (. - gText_DexSearchAlphaYZ)
	.endif
	@ Decoded text from ROM range: offset=0x5C9180, size=0x6
	.string "あか{EOS}"
	.string "あお{EOS}"

	@ src/strings.c:94 gText_DexSearchColorYellow
	.globl gText_DexSearchColorYellow
gText_DexSearchColorYellow: @ 0x085C9186
	.string "きいろ{EOS}"
	.if (. - gText_DexSearchColorYellow) > 0x4
	.error "gText_DexSearchColorYellow may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchColorYellow) < 0x4
	.space 0x4 - (. - gText_DexSearchColorYellow)
	.endif

.endif
