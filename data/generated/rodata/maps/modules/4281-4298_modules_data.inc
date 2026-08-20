	@ asm/field_specials.s:6476 sub_0813AE0C
	.globl gText_Rom_5C9299
gText_Rom_5C9299: @ 0x085C9299
	.string "▶{EOS}"
	.if (. - gText_Rom_5C9299) > 0x2
	.error "gText_Rom_5C9299 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9299) < 0x2
	.space 0x2 - (. - gText_Rom_5C9299)
	.endif
	@ analyzed canonical ROM range 0x085C929B-0x085C929C
gText_HofArrowPadding: @ 0x085C929B
	.byte 0x00, 0xFF

	@ src/strings.c:115 gText_WelcomeToHOF
	.globl gText_Rom_5C929D
gText_Rom_5C929D: @ 0x085C929D
	.string "でんどういり おめでとう!{EOS}"
	.if (. - gText_Rom_5C929D) > 0xe
	.error "gText_Rom_5C929D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C929D) < 0xe
	.space 0xe - (. - gText_Rom_5C929D)
	.endif
	@ analyzed canonical ROM range 0x085C92AB-0x085C92E9
gText_PokedexRatingIntro: @ 0x085C92AB
	.string "みつけた ポケモン {STR_VAR_1}!\nつかまえた ポケモン {STR_VAR_2}!\pオダマキはかせの\nポケモンずかん ひょうか!\pオダマキ『どれどれ\p{EOS}"
	.if (. - gText_PokedexRatingIntro) != 0x3F
	.error "gText_PokedexRatingIntro must retain its original byte length"
	.endif
	.globl gText_Rom_5C92EA
gText_Rom_5C92EA: @ 0x085C92EA
	.string "ここまでの レポートを かきしるしています!\nでんげんを きらないでください{EOS}"
	.if (. - gText_Rom_5C92EA) > 0x27
	.error "gText_Rom_5C92EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C92EA) < 0x27
	.space 0x27 - (. - gText_Rom_5C92EA)
	.endif

	@ src/strings.c:118 gText_HOFCorrupted
	.globl gText_Rom_5C9311
gText_Rom_5C9311: @ 0x085C9311
	.string "でんどういりの きろくが こわれています!{EOS}"
	.if (. - gText_Rom_5C9311) > 0x16
	.error "gText_Rom_5C9311 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9311) < 0x16
	.space 0x16 - (. - gText_Rom_5C9311)
	.endif
	.space 0x1, 0x00

	@ asm/hall_of_fame.s:2002 Task_HofPC_DrawSpritesPrintText
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9328
gText_Rom_5C9328: @ 0x085C9328
	.string "だい{0xFD}{0x02}かい　でんどういり！{EOS}"
	.if (. - gText_Rom_5C9328) != 0xf
	.error "gText_Rom_5C9328 must retain its original byte length"
	.endif
	.globl gText_Rom_5C932A
	.set gText_Rom_5C932A, gText_Rom_5C9328 + 0x2

	@ src/strings.c:120 gText_LeagueChamp
	.globl gText_Rom_5C9337
gText_Rom_5C9337: @ 0x085C9337
	.string "リーグ チャンピオン! おめでとう!{EOS}"
	.if (. - gText_Rom_5C9337) > 0x13
	.error "gText_Rom_5C9337 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9337) < 0x13
	.space 0x13 - (. - gText_Rom_5C9337)
	.endif
	.space 0x1, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085C934B: hall_of_fame.s: HallOfFame_PrintMonInfo
	.globl gHallOfFameData_085C934B
gHallOfFameData_085C934B: @ 0x085C934B
	@ analyzed canonical ROM range 0x085C934B-0x085C934E
gText_HofNumberLabel: @ 0x085C934B
	.string "No,{EOS}"
	.if (. - gText_HofNumberLabel) != 0x4
	.error "gText_HofNumberLabel must retain its original byte length"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085C934F: hall_of_fame.s: HallOfFame_PrintMonInfo
	.globl gHallOfFameData_085C934F
gHallOfFameData_085C934F: @ 0x085C934F
	@ analyzed canonical ROM range 0x085C934F-0x085C9358
gText_HofLevelAndIdLabels: @ 0x085C934F
	.string "Lv{EOS}IDNo,/{EOS}"
	.if (. - gText_HofLevelAndIdLabels) != 0xA
	.error "gText_HofLevelAndIdLabels must retain its original byte length"
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:184 easy_chat_group_lifestyle_line_184 (+5 aliases)
	.globl gText_Rom_5C9359
gText_Rom_5C9359: @ 0x085C9359
	.string "なまえ{EOS}"
	.if (. - gText_Rom_5C9359) > 0x4
	.error "gText_Rom_5C9359 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9359) < 0x4
	.space 0x4 - (. - gText_Rom_5C9359)
	.endif
	.globl gText_Rom_5C935D
gText_Rom_5C935D: @ 0x085C935D
	@ Decoded text from ROM range: offset=0x5C935D, size=0x6
	.string "IDNo,{EOS}"

	@ src/strings.c:126 gText_BirchInTrouble
	.globl gText_Rom_5C9363
gText_Rom_5C9363: @ 0x085C9363
	.string "オダマキはかせが ピンチだ!\nポケモンを だして たすけてあげよう!{EOS}"
	.if (. - gText_Rom_5C9363) > 0x23
	.error "gText_Rom_5C9363 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9363) < 0x23
	.space 0x23 - (. - gText_Rom_5C9363)
	.endif

	@ src/strings.c:127 gText_ConfirmStarterChoice
	.globl gText_Rom_5C9386
gText_Rom_5C9386: @ 0x085C9386
	.string "このポケモンにしますか?{EOS}"
	.if (. - gText_Rom_5C9386) > 0xd
	.error "gText_Rom_5C9386 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9386) < 0xd
	.space 0xd - (. - gText_Rom_5C9386)
	.endif
