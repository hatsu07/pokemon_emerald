	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine
	.globl gText_Rom_2593C5
gText_Rom_2593C5: @ 0x082593C5
	.string "　きれい　だよねー"
	.byte EOS
	.if (. - gText_Rom_2593C5) > 0xa
	.error "gText_Rom_2593C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2593C5) < 0xa
	.space 0xa - (. - gText_Rom_2593C5)
	.endif

	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine
	.globl gText_Rom_2593CF
gText_Rom_2593CF: @ 0x082593CF
	.string "　かわいい　よねー"
	.byte EOS
	.if (. - gText_Rom_2593CF) > 0xa
	.error "gText_Rom_2593CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2593CF) < 0xa
	.space 0xa - (. - gText_Rom_2593CF)
	.endif

	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine
	.globl gText_Rom_2593D9
gText_Rom_2593D9: @ 0x082593D9
	.string "　のんびり　だよねー"
	.byte EOS
	.if (. - gText_Rom_2593D9) > 0xb
	.error "gText_Rom_2593D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2593D9) < 0xb
	.space 0xb - (. - gText_Rom_2593D9)
	.endif

	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine
	.globl gText_Rom_2593E4
gText_Rom_2593E4: @ 0x082593E4
	.string "　ぽっかぽか　だよねー"
	.byte EOS
	.if (. - gText_Rom_2593E4) > 0xc
	.error "gText_Rom_2593E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2593E4) < 0xc
	.space 0xc - (. - gText_Rom_2593E4)
	.endif

	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine
	.globl gText_Rom_2593F0
gText_Rom_2593F0: @ 0x082593F0
	.string "　あこがれる　よねー"
	.byte EOS
	.if (. - gText_Rom_2593F0) > 0xb
	.error "gText_Rom_2593F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2593F0) < 0xb
	.space 0xb - (. - gText_Rom_2593F0)
	.endif

	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine
	.globl gText_Rom_2593FB
gText_Rom_2593FB: @ 0x082593FB
	.string "　ドキドキ　するよねー"
	.byte EOS
	.if (. - gText_Rom_2593FB) > 0xc
	.error "gText_Rom_2593FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2593FB) < 0xc
	.space 0xc - (. - gText_Rom_2593FB)
	.endif

	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine
	.globl gText_Rom_259407
gText_Rom_259407: @ 0x08259407
	.string "　おもしろい　よねー"
	.byte EOS
	.if (. - gText_Rom_259407) > 0xb
	.error "gText_Rom_259407 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259407) < 0xb
	.space 0xb - (. - gText_Rom_259407)
	.endif

	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine
	.globl gText_Rom_259412
gText_Rom_259412: @ 0x08259412
	.string "　ふしぎ　だよねー"
	.byte EOS
	.if (. - gText_Rom_259412) > 0xa
	.error "gText_Rom_259412 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259412) < 0xa
	.space 0xa - (. - gText_Rom_259412)
	.endif

	@ asm/mauville_old_man.s:460 ScrSpecial_GenerateGiddyLine
	.globl gText_Rom_25941C
gText_Rom_25941C: @ 0x0825941C
	.string "って"
	.byte EOS
	.if (. - gText_Rom_25941C) > 0x3
	.error "gText_Rom_25941C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25941C) < 0x3
	.space 0x3 - (. - gText_Rom_25941C)
	.endif

	@ asm/mauville_old_man.s:470 ScrSpecial_GenerateGiddyLine
	.globl gText_Rom_25941F
gText_Rom_25941F: @ 0x0825941F
	.string "\nそう　おもわない？"
	.byte EOS
	.if (. - gText_Rom_25941F) > 0xb
	.error "gText_Rom_25941F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25941F) < 0xb
	.space 0xb - (. - gText_Rom_25941F)
	.endif

	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine (+1 aliases)
	.globl gText_Rom_25942A
gText_Rom_25942A: @ 0x0825942A
	.string "たびに　でたいなー\nどこか　いい　ところ　しらない？"
	.byte EOS
	.if (. - gText_Rom_25942A) > 0x1b
	.error "gText_Rom_25942A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25942A) < 0x1b
	.space 0x1b - (. - gText_Rom_25942A)
	.endif

	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine (+1 aliases)
	.globl gText_Rom_259445
gText_Rom_259445: @ 0x08259445
	.string "120しょくの　クレヨン　かったんだー\nいいでしょう？"
	.byte EOS
	.if (. - gText_Rom_259445) > 0x1c
	.error "gText_Rom_259445 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259445) < 0x1c
	.space 0x1c - (. - gText_Rom_259445)
	.endif

	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine (+1 aliases)
	.globl gText_Rom_259461
gText_Rom_259461: @ 0x08259461
	.string "しゃぼんだまに　のって　とべるように\nならないかなー"
	.byte EOS
	.if (. - gText_Rom_259461) > 0x1b
	.error "gText_Rom_259461 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259461) < 0x1b
	.space 0x1b - (. - gText_Rom_259461)
	.endif

	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine (+1 aliases)
	.globl gText_Rom_25947C
gText_Rom_25947C: @ 0x0825947C
	.string "すなはまに　かいた　もじは\nすぐに　きえちゃうのが　かなしいよねー"
	.byte EOS
	.if (. - gText_Rom_25947C) > 0x22
	.error "gText_Rom_25947C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25947C) < 0x22
	.space 0x22 - (. - gText_Rom_25947C)
	.endif

	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine (+1 aliases)
	.globl gText_Rom_25949E
gText_Rom_25949E: @ 0x0825949E
	.string "うみの　そこって　どうなってるのかなー\nいちどで　いいから　みて　みたいなー"
	.byte EOS
	.if (. - gText_Rom_25949E) > 0x27
	.error "gText_Rom_25949E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25949E) < 0x27
	.space 0x27 - (. - gText_Rom_25949E)
	.endif

	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine (+1 aliases)
	.globl gText_Rom_2594C5
gText_Rom_2594C5: @ 0x082594C5
	.string "ゆうやけを　みると\nウチに　かえりたく　ならない？"
	.byte EOS
	.if (. - gText_Rom_2594C5) > 0x1a
	.error "gText_Rom_2594C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2594C5) < 0x1a
	.space 0x1a - (. - gText_Rom_2594C5)
	.endif
