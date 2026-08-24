	@ asm/field_specials.s:4112 sub_08139BD4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB0B4
gText_Rom_5CB0B4: @ 0x085CB0B4
	.string "ビ4かい{EOS}"
	.if (. - gText_Rom_5CB0B4) != 0x5
	.error "gText_Rom_5CB0B4 must retain its original byte length"
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB0B9
gText_Rom_5CB0B9: @ 0x085CB0B9
	.string "おくじょう{EOS}"
	.if (. - gText_Rom_5CB0B9) > 0x6
	.error "gText_Rom_5CB0B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0B9) < 0x6
	.space 0x6 - (. - gText_Rom_5CB0B9)
	.endif

	@ src/strings.c:528 gText_ElevatorNowOn
	.globl gText_ElevatorNowOn
gText_ElevatorNowOn: @ 0x085CB0BF
	.string "げんざいのフロア{EOS}"
	.if (. - gText_ElevatorNowOn) > 0x9
	.error "gText_ElevatorNowOn may not grow beyond its original slot"
	.endif
	.if (. - gText_ElevatorNowOn) < 0x9
	.space 0x9 - (. - gText_ElevatorNowOn)
	.endif

	@ asm/field_specials.s:5777 sub_0813A904
	.globl gText_Rom_5CB0C8
gText_Rom_5CB0C8: @ 0x085CB0C8
	.string "BP{EOS}"
	.if (. - gText_Rom_5CB0C8) > 0x3
	.error "gText_Rom_5CB0C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0C8) < 0x3
	.space 0x3 - (. - gText_Rom_5CB0C8)
	.endif

	@ src/field_specials.c:2592 field_specials_line_2592
	.globl gFieldSpecialsMenuText_Block07_Item00
gFieldSpecialsMenuText_Block07_Item00: @ 0x085CB0CB
	.string "ちからのこな  {FONT_SMALL}  50{EOS}"
	.if (. - gFieldSpecialsMenuText_Block07_Item00) > 0x10
	.error "gFieldSpecialsMenuText_Block07_Item00 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block07_Item00) < 0x10
	.space 0x10 - (. - gFieldSpecialsMenuText_Block07_Item00)
	.endif

	@ src/field_specials.c:2593 field_specials_line_2593
	.globl gFieldSpecialsMenuText_Block07_Item01
gFieldSpecialsMenuText_Block07_Item01: @ 0x085CB0DB
	.string "ちからのねっこ {FONT_SMALL}  80{EOS}"
	.if (. - gFieldSpecialsMenuText_Block07_Item01) > 0x10
	.error "gFieldSpecialsMenuText_Block07_Item01 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block07_Item01) < 0x10
	.space 0x10 - (. - gFieldSpecialsMenuText_Block07_Item01)
	.endif

	@ src/field_specials.c:2594 field_specials_line_2594
	.globl gFieldSpecialsMenuText_Block07_Item02
gFieldSpecialsMenuText_Block07_Item02: @ 0x085CB0EB
	.string "ばんのうごな  {FONT_SMALL}  50{EOS}"
	.if (. - gFieldSpecialsMenuText_Block07_Item02) > 0x10
	.error "gFieldSpecialsMenuText_Block07_Item02 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block07_Item02) < 0x10
	.space 0x10 - (. - gFieldSpecialsMenuText_Block07_Item02)
	.endif

	@ src/field_specials.c:2595 field_specials_line_2595
	.globl gFieldSpecialsMenuText_Block07_Item03
gFieldSpecialsMenuText_Block07_Item03: @ 0x085CB0FB
	.string "ふっかつそう  {FONT_SMALL} 300{EOS}"
	.if (. - gFieldSpecialsMenuText_Block07_Item03) > 0x10
	.error "gFieldSpecialsMenuText_Block07_Item03 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block07_Item03) < 0x10
	.space 0x10 - (. - gFieldSpecialsMenuText_Block07_Item03)
	.endif

	@ src/field_specials.c:2596 field_specials_line_2596
	.globl gFieldSpecialsMenuText_Block07_Item04
gFieldSpecialsMenuText_Block07_Item04: @ 0x085CB10B
	.string "タウリン    {FONT_SMALL}1000{EOS}"
	.if (. - gFieldSpecialsMenuText_Block07_Item04) > 0x10
	.error "gFieldSpecialsMenuText_Block07_Item04 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block07_Item04) < 0x10
	.space 0x10 - (. - gFieldSpecialsMenuText_Block07_Item04)
	.endif

	@ src/field_specials.c:2597 field_specials_line_2597
	.globl gFieldSpecialsMenuText_Block07_Item05
gFieldSpecialsMenuText_Block07_Item05: @ 0x085CB11B
	.string "ブロムヘキシン {FONT_SMALL}1000{EOS}"
	.if (. - gFieldSpecialsMenuText_Block07_Item05) > 0x10
	.error "gFieldSpecialsMenuText_Block07_Item05 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block07_Item05) < 0x10
	.space 0x10 - (. - gFieldSpecialsMenuText_Block07_Item05)
	.endif

	@ src/field_specials.c:2598 field_specials_line_2598
	.globl gFieldSpecialsMenuText_Block07_Item06
gFieldSpecialsMenuText_Block07_Item06: @ 0x085CB12B
	.string "インドメタシン {FONT_SMALL}1000{EOS}"
	.if (. - gFieldSpecialsMenuText_Block07_Item06) > 0x10
	.error "gFieldSpecialsMenuText_Block07_Item06 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block07_Item06) < 0x10
	.space 0x10 - (. - gFieldSpecialsMenuText_Block07_Item06)
	.endif

	@ src/field_specials.c:2599 field_specials_line_2599
	.globl gFieldSpecialsMenuText_Block07_Item07
gFieldSpecialsMenuText_Block07_Item07: @ 0x085CB13B
	.string "リゾチウム   {FONT_SMALL}1000{EOS}"
	.if (. - gFieldSpecialsMenuText_Block07_Item07) > 0x10
	.error "gFieldSpecialsMenuText_Block07_Item07 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block07_Item07) < 0x10
	.space 0x10 - (. - gFieldSpecialsMenuText_Block07_Item07)
	.endif

	@ src/field_specials.c:2600 field_specials_line_2600
	.globl gFieldSpecialsMenuText_Block07_Item08
gFieldSpecialsMenuText_Block07_Item08: @ 0x085CB14B
	.string "キトサン    {FONT_SMALL}1000{EOS}"
	.if (. - gFieldSpecialsMenuText_Block07_Item08) > 0x10
	.error "gFieldSpecialsMenuText_Block07_Item08 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block07_Item08) < 0x10
	.space 0x10 - (. - gFieldSpecialsMenuText_Block07_Item08)
	.endif

	@ src/field_specials.c:2601 field_specials_line_2601
	.globl gFieldSpecialsMenuText_Block07_Item09
gFieldSpecialsMenuText_Block07_Item09: @ 0x085CB15B
	.string "マックスアップ {FONT_SMALL}1000{EOS}"
	.if (. - gFieldSpecialsMenuText_Block07_Item09) > 0x10
	.error "gFieldSpecialsMenuText_Block07_Item09 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block07_Item09) < 0x10
	.space 0x10 - (. - gFieldSpecialsMenuText_Block07_Item09)
	.endif

	@ src/field_specials.c:2602 field_specials_line_2602
	.globl gFieldSpecialsMenuText_Block07_Item10
gFieldSpecialsMenuText_Block07_Item10: @ 0x085CB16B
	.string "ポイントアップ {FONT_SMALL}3000{EOS}"
	.if (. - gFieldSpecialsMenuText_Block07_Item10) > 0x10
	.error "gFieldSpecialsMenuText_Block07_Item10 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block07_Item10) < 0x10
	.space 0x10 - (. - gFieldSpecialsMenuText_Block07_Item10)
	.endif

	@ src/strings.c:530 gText_RankingHall
	.globl gText_RankingHall
gText_RankingHall: @ 0x085CB17B
	.string "ランキングホール{EOS}"
	.if (. - gText_RankingHall) > 0x9
	.error "gText_RankingHall may not grow beyond its original slot"
	.endif
	.if (. - gText_RankingHall) < 0x9
	.space 0x9 - (. - gText_RankingHall)
	.endif
