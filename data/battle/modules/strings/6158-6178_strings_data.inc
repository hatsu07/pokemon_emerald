	@ pret/pokeemerald-jp direct xref for 0x085CC4E4: contest_link_80F57C4.s: sub_080F739C
	.globl gContestLink80F57C4Data_085CC4E4
gContestLink80F57C4Data_085CC4E4: @ 0x085CC4E4
	@ analyzed canonical ROM range 0x085CC4E4-0x085CC4E9
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x6 bytes=6
	.byte 0xFC, 0x04, 0x0F, 0x01, 0x0E, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085CC4EA: battle_interface.s: UpdateNickInHealthbox
	.globl gBattleInterfaceData_085CC4EA
gBattleInterfaceData_085CC4EA: @ 0x085CC4EA
	@ analyzed canonical ROM range 0x085CC4EA-0x085CC4ED
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0xFC, 0x02, 0x02, 0xFF
	.globl gText_Rom_5CC4EE
	@ asm/battle_interface.s:1227 UpdateLvlInHealthbox
	.globl gText_Rom_5CC4EE
gText_Rom_5CC4EE: @ 0x085CC4EE
	.string "　{EOS}"
	.if (. - gText_Rom_5CC4EE) > 0x2
	.error "gText_Rom_5CC4EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4EE) < 0x2
	.space 0x2 - (. - gText_Rom_5CC4EE)
	.endif
	.globl gText_HealthboxGender_Male

	@ src/strings.c:719 gText_HealthboxGender_Male
	.globl gText_HealthboxGender_Male
gText_HealthboxGender_Male: @ 0x085CC4F0
	.string "{COLOR DYNAMIC_COLOR2}♂{EOS}"
	.if (. - gText_HealthboxGender_Male) > 0x5
	.error "gText_HealthboxGender_Male may not grow beyond its original slot"
	.endif
	.if (. - gText_HealthboxGender_Male) < 0x5
	.space 0x5 - (. - gText_HealthboxGender_Male)
	.endif

	@ src/strings.c:720 gText_HealthboxGender_Female
	.globl gText_HealthboxGender_Female
gText_HealthboxGender_Female: @ 0x085CC4F5
	.string "{COLOR DYNAMIC_COLOR1}♀{EOS}"
	.if (. - gText_HealthboxGender_Female) > 0x5
	.error "gText_HealthboxGender_Female may not grow beyond its original slot"
	.endif
	.if (. - gText_HealthboxGender_Female) < 0x5
	.space 0x5 - (. - gText_HealthboxGender_Female)
	.endif

	@ src/strings.c:721 gText_HealthboxGender_None
	.globl gText_HealthboxGender_None
gText_HealthboxGender_None: @ 0x085CC4FA
	.string "{COLOR DYNAMIC_COLOR2}{EOS}"
	.if (. - gText_HealthboxGender_None) > 0x4
	.error "gText_HealthboxGender_None may not grow beyond its original slot"
	.endif
	.if (. - gText_HealthboxGender_None) < 0x4
	.space 0x4 - (. - gText_HealthboxGender_None)
	.endif

	@ src/strings.c:83 gText_DexSearchAlphaABC
	.globl gText_DexSearchAlphaABC_Copy_Battle
gText_DexSearchAlphaABC_Copy_Battle: @ 0x085CC4FE
	.string "あいうえお{EOS}"
	.if (. - gText_DexSearchAlphaABC_Copy_Battle) > 0x6
	.error "gText_DexSearchAlphaABC_Copy_Battle may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaABC_Copy_Battle) < 0x6
	.space 0x6 - (. - gText_DexSearchAlphaABC_Copy_Battle)
	.endif

	@ src/strings.c:84 gText_DexSearchAlphaDEF
	.globl gText_DexSearchAlphaDEF_Copy_Battle
gText_DexSearchAlphaDEF_Copy_Battle: @ 0x085CC504
	.string "かきくけこ{EOS}"
	.if (. - gText_DexSearchAlphaDEF_Copy_Battle) > 0x6
	.error "gText_DexSearchAlphaDEF_Copy_Battle may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaDEF_Copy_Battle) < 0x6
	.space 0x6 - (. - gText_DexSearchAlphaDEF_Copy_Battle)
	.endif

	@ src/strings.c:85 gText_DexSearchAlphaGHI
	.globl gText_DexSearchAlphaGHI_Copy_Battle
gText_DexSearchAlphaGHI_Copy_Battle: @ 0x085CC50A
	.string "さしすせそ{EOS}"
	.if (. - gText_DexSearchAlphaGHI_Copy_Battle) > 0x6
	.error "gText_DexSearchAlphaGHI_Copy_Battle may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaGHI_Copy_Battle) < 0x6
	.space 0x6 - (. - gText_DexSearchAlphaGHI_Copy_Battle)
	.endif

	@ src/strings.c:86 gText_DexSearchAlphaJKL
	.globl gText_DexSearchAlphaJKL_Copy_Battle
gText_DexSearchAlphaJKL_Copy_Battle: @ 0x085CC510
	.string "たちつてと{EOS}"
	.if (. - gText_DexSearchAlphaJKL_Copy_Battle) > 0x6
	.error "gText_DexSearchAlphaJKL_Copy_Battle may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaJKL_Copy_Battle) < 0x6
	.space 0x6 - (. - gText_DexSearchAlphaJKL_Copy_Battle)
	.endif

	@ src/strings.c:87 gText_DexSearchAlphaMNO
	.globl gText_DexSearchAlphaMNO_Copy_Battle
gText_DexSearchAlphaMNO_Copy_Battle: @ 0x085CC516
	.string "なにぬねの{EOS}"
	.if (. - gText_DexSearchAlphaMNO_Copy_Battle) > 0x6
	.error "gText_DexSearchAlphaMNO_Copy_Battle may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaMNO_Copy_Battle) < 0x6
	.space 0x6 - (. - gText_DexSearchAlphaMNO_Copy_Battle)
	.endif

	@ src/strings.c:88 gText_DexSearchAlphaPQR
	.globl gText_DexSearchAlphaPQR_Copy_Battle
gText_DexSearchAlphaPQR_Copy_Battle: @ 0x085CC51C
	.string "はひふへほ{EOS}"
	.if (. - gText_DexSearchAlphaPQR_Copy_Battle) > 0x6
	.error "gText_DexSearchAlphaPQR_Copy_Battle may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaPQR_Copy_Battle) < 0x6
	.space 0x6 - (. - gText_DexSearchAlphaPQR_Copy_Battle)
	.endif

	@ src/strings.c:89 gText_DexSearchAlphaSTU
	.globl gText_DexSearchAlphaSTU_Copy_Battle
gText_DexSearchAlphaSTU_Copy_Battle: @ 0x085CC522
	.string "まみむめも{EOS}"
	.if (. - gText_DexSearchAlphaSTU_Copy_Battle) > 0x6
	.error "gText_DexSearchAlphaSTU_Copy_Battle may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaSTU_Copy_Battle) < 0x6
	.space 0x6 - (. - gText_DexSearchAlphaSTU_Copy_Battle)
	.endif
	@ Decoded text from ROM range: offset=0x5CC528, size=0x6
	.string "やゆよ！？{EOS}"

	@ src/strings.c:90 gText_DexSearchAlphaVWX
	.globl gText_DexSearchAlphaVWX_Copy_Battle
gText_DexSearchAlphaVWX_Copy_Battle: @ 0x085CC52E
	.string "らりるれろ{EOS}"
	.if (. - gText_DexSearchAlphaVWX_Copy_Battle) > 0x6
	.error "gText_DexSearchAlphaVWX_Copy_Battle may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaVWX_Copy_Battle) < 0x6
	.space 0x6 - (. - gText_DexSearchAlphaVWX_Copy_Battle)
	.endif
	@ Decoded text from ROM range: offset=0x5CC534, size=0x42
	.string "わをんー　{EOS}"
	.string "アイウエオ{EOS}"
	.string "カキクケコ{EOS}"
	.string "サシスセソ{EOS}"
	.string "タチツテト{EOS}"
	.string "ナニヌネノ{EOS}"
	.string "ハヒフヘホ{EOS}"
	.string "マミムメモ{EOS}"
	.string "ヤユヨ！？{EOS}"
	.string "ラリルレロ{EOS}"
	.string "ワヲンー　{EOS}"
