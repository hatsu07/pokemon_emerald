	@ field-script:0x21C07D FieldScriptText_21C0D0
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_21C0D0
FieldScriptText_21C0D0: @ 0x0821C0D0
	.string "めを　さました　レックウザは\nどこかへ　とんで　いって　しまった……"
	.byte EOS
	.if (. - FieldScriptText_21C0D0) != 0x23
	.error "FieldScriptText_21C0D0 must retain its original byte length"
	.endif
	@ Embedded ROM bytes: file offset 0x21C0F3, size 0x3A
	.byte 0x03, 0xF9, 0xC0, 0x21, 0x08, 0x00, 0x16, 0xBD, 0x40, 0x00, 0x00, 0x02, 0x5C, 0x00, 0xCC, 0x02
	.byte 0x00, 0x00
	.4byte MagmaHideout_1F_Text_Grunt1Intro
	.4byte MagmaHideout_1F_Text_Grunt1Defeat
	.byte 0x0F, 0x00
	.4byte MagmaHideout_1F_Text_Grunt1PostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0xCD, 0x02, 0x00, 0x00, 0xD5, 0xC1, 0x21, 0x08, 0x2E, 0xC2, 0x21
	.byte 0x08, 0x0F, 0x00, 0x3E, 0xC2, 0x21, 0x08, 0x09, 0x06, 0x02
	@ data/maps/MagmaHideout_1F/scripts.inc:19 MagmaHideout_1F_Text_Grunt1Intro (+1 aliases)
	.globl MagmaHideout_1F_Text_Grunt1Intro
MagmaHideout_1F_Text_Grunt1Intro: @ 0x0821C12D
	.string "マグマだんは ごうれいが かかったとき\nはやく せいれつした じゅんばんで\lじゅうような ばしょの\lけいびを まかせて もらえるんだぜ!\pオレが こんな すみっこに いるのは\nちこく ばっかり してるからさ!"
	.byte EOS
	.if (. - MagmaHideout_1F_Text_Grunt1Intro) > 0x69
	.error "MagmaHideout_1F_Text_Grunt1Intro may not grow beyond its original slot"
	.endif
	.if (. - MagmaHideout_1F_Text_Grunt1Intro) < 0x69
	.space 0x69 - (. - MagmaHideout_1F_Text_Grunt1Intro)
	.endif
	@ data/maps/MagmaHideout_1F/scripts.inc:26 MagmaHideout_1F_Text_Grunt1Defeat (+1 aliases)
	.globl MagmaHideout_1F_Text_Grunt1Defeat
MagmaHideout_1F_Text_Grunt1Defeat: @ 0x0821C196
	.string "トレーニングにも ちこくする オレだ!\nわれながら よわいぜ……"
	.byte EOS
	.if (. - MagmaHideout_1F_Text_Grunt1Defeat) > 0x21
	.error "MagmaHideout_1F_Text_Grunt1Defeat may not grow beyond its original slot"
	.endif
	.if (. - MagmaHideout_1F_Text_Grunt1Defeat) < 0x21
	.space 0x21 - (. - MagmaHideout_1F_Text_Grunt1Defeat)
	.endif
	@ data/maps/MagmaHideout_1F/scripts.inc:31 MagmaHideout_1F_Text_Grunt1PostBattle
	.globl MagmaHideout_1F_Text_Grunt1PostBattle
MagmaHideout_1F_Text_Grunt1PostBattle: @ 0x0821C1B7
	.string "わかったよ こんどから もうすこし\nがんばって みるよ……"
	.byte EOS
	.if (. - MagmaHideout_1F_Text_Grunt1PostBattle) > 0x1e
	.error "MagmaHideout_1F_Text_Grunt1PostBattle may not grow beyond its original slot"
	.endif
	.if (. - MagmaHideout_1F_Text_Grunt1PostBattle) < 0x1e
	.space 0x1e - (. - MagmaHideout_1F_Text_Grunt1PostBattle)
	.endif
	@ data/maps/MagmaHideout_1F/scripts.inc:35 MagmaHideout_1F_Text_Grunt2Intro (+1 aliases)
	.globl MagmaHideout_1F_Text_Grunt2Intro
MagmaHideout_1F_Text_Grunt2Intro: @ 0x0821C1D5
	.string "リーダーに いわれた とおり\nえんとつやまを どんどん ほっていたら\lとんでもねえモンが でちまった!\pなにが でたかって?\pふははは!\nオレを たおせたら おしえて やるよ!"
	.byte EOS
	.if (. - MagmaHideout_1F_Text_Grunt2Intro) > 0x59
	.error "MagmaHideout_1F_Text_Grunt2Intro may not grow beyond its original slot"
	.endif
	.if (. - MagmaHideout_1F_Text_Grunt2Intro) < 0x59
	.space 0x59 - (. - MagmaHideout_1F_Text_Grunt2Intro)
	.endif
	@ data/maps/MagmaHideout_1F/scripts.inc:44 MagmaHideout_1F_Text_Grunt2Defeat (+1 aliases)
	.globl MagmaHideout_1F_Text_Grunt2Defeat
MagmaHideout_1F_Text_Grunt2Defeat: @ 0x0821C22E
	.string "むぐぅ…… たおされちまった!"
	.byte EOS
	.if (. - MagmaHideout_1F_Text_Grunt2Defeat) > 0x10
	.error "MagmaHideout_1F_Text_Grunt2Defeat may not grow beyond its original slot"
	.endif
	.if (. - MagmaHideout_1F_Text_Grunt2Defeat) < 0x10
	.space 0x10 - (. - MagmaHideout_1F_Text_Grunt2Defeat)
	.endif
	@ data/maps/MagmaHideout_1F/scripts.inc:48 MagmaHideout_1F_Text_Grunt2PostBattle
	.globl MagmaHideout_1F_Text_Grunt2PostBattle
MagmaHideout_1F_Text_Grunt2PostBattle: @ 0x0821C23E
	.string "やっぱり おしえるの やーめた!\nどうせ おくまで いけば わかることさ!\pおまえも あとに おたのしみを\nのこして おいたほうが いいだろ?"
	.byte EOS
	.if (. - MagmaHideout_1F_Text_Grunt2PostBattle) > 0x48
	.error "MagmaHideout_1F_Text_Grunt2PostBattle may not grow beyond its original slot"
	.endif
	.if (. - MagmaHideout_1F_Text_Grunt2PostBattle) < 0x48
	.space 0x48 - (. - MagmaHideout_1F_Text_Grunt2PostBattle)
	.endif
	@ Embedded ROM bytes: file offset 0x21C286, size 0x5D
	.byte 0x00, 0x5C, 0x00, 0xD9, 0x02, 0x00, 0x00
	.4byte MagmaHideout_2F_1R_Text_Grunt14Intro
	.4byte MagmaHideout_2F_1R_Text_Grunt14Defeat
	.byte 0x0F
	.byte 0x00
	.4byte MagmaHideout_2F_1R_Text_Grunt14PostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0xCE, 0x02, 0x00, 0x00, 0x75, 0xC3
	.byte 0x21, 0x08, 0x9F, 0xC3, 0x21, 0x08, 0x0F, 0x00
	.4byte MagmaHideout_2F_1R_Text_Grunt3PostBattle
	.byte 0x09, 0x06, 0x02, 0x5C
	.byte 0x00, 0xCF, 0x02, 0x00, 0x00
	.4byte MagmaHideout_2F_1R_Text_Grunt4Intro
	.4byte MagmaHideout_2F_1R_Text_Grunt4Defeat
	.byte 0x0F, 0x00
	.4byte MagmaHideout_2F_1R_Text_Grunt4PostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0xD0, 0x02, 0x00, 0x00
	.4byte MagmaHideout_2F_1R_Text_Grunt5Intro
	.4byte MagmaHideout_2F_1R_Text_Grunt5Defeat
	.byte 0x0F, 0x00, 0x22, 0xC4, 0x21, 0x08, 0x09, 0x06, 0x02
