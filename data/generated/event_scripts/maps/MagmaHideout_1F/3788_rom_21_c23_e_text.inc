	@ data/maps/MagmaHideout_1F/scripts.inc:26 MagmaHideout_1F_Text_Grunt1Defeat (+1 aliases)
	.globl gText_Rom_21C196
gText_Rom_21C196: @ 0x0821C196
	.string "トレーニングにも ちこくする オレだ!\nわれながら よわいぜ……"
	.byte EOS
	.if (. - gText_Rom_21C196) > 0x21
	.error "gText_Rom_21C196 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C196) < 0x21
	.space 0x21 - (. - gText_Rom_21C196)
	.endif
	@ data/maps/MagmaHideout_1F/scripts.inc:31 MagmaHideout_1F_Text_Grunt1PostBattle
	.globl gText_Rom_21C1B7
gText_Rom_21C1B7: @ 0x0821C1B7
	.string "わかったよ こんどから もうすこし\nがんばって みるよ……"
	.byte EOS
	.if (. - gText_Rom_21C1B7) > 0x1e
	.error "gText_Rom_21C1B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C1B7) < 0x1e
	.space 0x1e - (. - gText_Rom_21C1B7)
	.endif
	@ data/maps/MagmaHideout_1F/scripts.inc:35 MagmaHideout_1F_Text_Grunt2Intro (+1 aliases)
	.globl gText_Rom_21C1D5
gText_Rom_21C1D5: @ 0x0821C1D5
	.string "リーダーに いわれた とおり\nえんとつやまを どんどん ほっていたら\lとんでもねえモンが でちまった!\pなにが でたかって?\pふははは!\nオレを たおせたら おしえて やるよ!"
	.byte EOS
	.if (. - gText_Rom_21C1D5) > 0x59
	.error "gText_Rom_21C1D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C1D5) < 0x59
	.space 0x59 - (. - gText_Rom_21C1D5)
	.endif
	@ data/maps/MagmaHideout_1F/scripts.inc:44 MagmaHideout_1F_Text_Grunt2Defeat (+1 aliases)
	.globl gText_Rom_21C22E
gText_Rom_21C22E: @ 0x0821C22E
	.string "むぐぅ…… たおされちまった!"
	.byte EOS
	.if (. - gText_Rom_21C22E) > 0x10
	.error "gText_Rom_21C22E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C22E) < 0x10
	.space 0x10 - (. - gText_Rom_21C22E)
	.endif
	@ data/maps/MagmaHideout_1F/scripts.inc:48 MagmaHideout_1F_Text_Grunt2PostBattle
	.globl gText_Rom_21C23E
gText_Rom_21C23E: @ 0x0821C23E
	.string "やっぱり おしえるの やーめた!\nどうせ おくまで いけば わかることさ!\pおまえも あとに おたのしみを\nのこして おいたほうが いいだろ?"
	.byte EOS
	.if (. - gText_Rom_21C23E) > 0x48
	.error "gText_Rom_21C23E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C23E) < 0x48
	.space 0x48 - (. - gText_Rom_21C23E)
	.endif
	@ Embedded ROM bytes: file offset 0x21C286, size 0x5D
	.byte 0x00, 0x5C, 0x00, 0xD9, 0x02, 0x00, 0x00, 0xE3, 0xC2, 0x21, 0x08, 0x44, 0xC3, 0x21, 0x08, 0x0F
	.byte 0x00, 0x5A, 0xC3, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0xCE, 0x02, 0x00, 0x00, 0x75, 0xC3
	.byte 0x21, 0x08, 0x9F, 0xC3, 0x21, 0x08, 0x0F, 0x00, 0xAC, 0xC3, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C
	.byte 0x00, 0xCF, 0x02, 0x00, 0x00, 0xCF, 0xC3, 0x21, 0x08, 0xDD, 0xC3, 0x21, 0x08, 0x0F, 0x00, 0xE3
	.byte 0xC3, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0xD0, 0x02, 0x00, 0x00, 0x0E, 0xC4, 0x21, 0x08
	.byte 0x1C, 0xC4, 0x21, 0x08, 0x0F, 0x00, 0x22, 0xC4, 0x21, 0x08, 0x09, 0x06, 0x02
