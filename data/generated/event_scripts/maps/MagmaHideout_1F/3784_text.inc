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
