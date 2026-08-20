	@ asm/field_specials.s:4112 sub_08139BD4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB0B4
gText_Rom_5CB0B4: @ 0x085CB0B4
	.string "ビ4かい{EOS}"
	.if (. - gText_Rom_5CB0B4) != 0x5
	.error "gText_Rom_5CB0B4 must retain its original byte length"
	.endif
	.globl gText_Rom_5CB0B5
	.set gText_Rom_5CB0B5, gText_Rom_5CB0B4 + 0x1

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
	.globl gText_Rom_5CB0BF
gText_Rom_5CB0BF: @ 0x085CB0BF
	.string "げんざいのフロア{EOS}"
	.if (. - gText_Rom_5CB0BF) > 0x9
	.error "gText_Rom_5CB0BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0BF) < 0x9
	.space 0x9 - (. - gText_Rom_5CB0BF)
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
	.globl gText_Rom_5CB0CB
gText_Rom_5CB0CB: @ 0x085CB0CB
	.string "ちからのこな  {FONT_SMALL}  50{EOS}"
	.if (. - gText_Rom_5CB0CB) > 0x10
	.error "gText_Rom_5CB0CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0CB) < 0x10
	.space 0x10 - (. - gText_Rom_5CB0CB)
	.endif

	@ src/field_specials.c:2593 field_specials_line_2593
	.globl gText_Rom_5CB0DB
gText_Rom_5CB0DB: @ 0x085CB0DB
	.string "ちからのねっこ {FONT_SMALL}  80{EOS}"
	.if (. - gText_Rom_5CB0DB) > 0x10
	.error "gText_Rom_5CB0DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0DB) < 0x10
	.space 0x10 - (. - gText_Rom_5CB0DB)
	.endif

	@ src/field_specials.c:2594 field_specials_line_2594
	.globl gText_Rom_5CB0EB
gText_Rom_5CB0EB: @ 0x085CB0EB
	.string "ばんのうごな  {FONT_SMALL}  50{EOS}"
	.if (. - gText_Rom_5CB0EB) > 0x10
	.error "gText_Rom_5CB0EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0EB) < 0x10
	.space 0x10 - (. - gText_Rom_5CB0EB)
	.endif

	@ src/field_specials.c:2595 field_specials_line_2595
	.globl gText_Rom_5CB0FB
gText_Rom_5CB0FB: @ 0x085CB0FB
	.string "ふっかつそう  {FONT_SMALL} 300{EOS}"
	.if (. - gText_Rom_5CB0FB) > 0x10
	.error "gText_Rom_5CB0FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0FB) < 0x10
	.space 0x10 - (. - gText_Rom_5CB0FB)
	.endif

	@ src/field_specials.c:2596 field_specials_line_2596
	.globl gText_Rom_5CB10B
gText_Rom_5CB10B: @ 0x085CB10B
	.string "タウリン    {FONT_SMALL}1000{EOS}"
	.if (. - gText_Rom_5CB10B) > 0x10
	.error "gText_Rom_5CB10B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB10B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB10B)
	.endif

	@ src/field_specials.c:2597 field_specials_line_2597
	.globl gText_Rom_5CB11B
gText_Rom_5CB11B: @ 0x085CB11B
	.string "ブロムヘキシン {FONT_SMALL}1000{EOS}"
	.if (. - gText_Rom_5CB11B) > 0x10
	.error "gText_Rom_5CB11B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB11B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB11B)
	.endif

	@ src/field_specials.c:2598 field_specials_line_2598
	.globl gText_Rom_5CB12B
gText_Rom_5CB12B: @ 0x085CB12B
	.string "インドメタシン {FONT_SMALL}1000{EOS}"
	.if (. - gText_Rom_5CB12B) > 0x10
	.error "gText_Rom_5CB12B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB12B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB12B)
	.endif

	@ src/field_specials.c:2599 field_specials_line_2599
	.globl gText_Rom_5CB13B
gText_Rom_5CB13B: @ 0x085CB13B
	.string "リゾチウム   {FONT_SMALL}1000{EOS}"
	.if (. - gText_Rom_5CB13B) > 0x10
	.error "gText_Rom_5CB13B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB13B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB13B)
	.endif

	@ src/field_specials.c:2600 field_specials_line_2600
	.globl gText_Rom_5CB14B
gText_Rom_5CB14B: @ 0x085CB14B
	.string "キトサン    {FONT_SMALL}1000{EOS}"
	.if (. - gText_Rom_5CB14B) > 0x10
	.error "gText_Rom_5CB14B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB14B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB14B)
	.endif

	@ src/field_specials.c:2601 field_specials_line_2601
	.globl gText_Rom_5CB15B
gText_Rom_5CB15B: @ 0x085CB15B
	.string "マックスアップ {FONT_SMALL}1000{EOS}"
	.if (. - gText_Rom_5CB15B) > 0x10
	.error "gText_Rom_5CB15B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB15B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB15B)
	.endif

	@ src/field_specials.c:2602 field_specials_line_2602
	.globl gText_Rom_5CB16B
gText_Rom_5CB16B: @ 0x085CB16B
	.string "ポイントアップ {FONT_SMALL}3000{EOS}"
	.if (. - gText_Rom_5CB16B) > 0x10
	.error "gText_Rom_5CB16B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB16B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB16B)
	.endif

	@ src/strings.c:530 gText_RankingHall
	.globl gText_Rom_5CB17B
gText_Rom_5CB17B: @ 0x085CB17B
	.string "ランキングホール{EOS}"
	.if (. - gText_Rom_5CB17B) > 0x9
	.error "gText_Rom_5CB17B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB17B) < 0x9
	.space 0x9 - (. - gText_Rom_5CB17B)
	.endif
