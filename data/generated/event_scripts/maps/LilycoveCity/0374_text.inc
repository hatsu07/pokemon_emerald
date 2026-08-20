	@ data/maps/LilycoveCity/scripts.inc:506 LilycoveCity_Text_BrendanGoingBackToLittleroot
	.globl gText_Rom_1E0AAF
gText_Rom_1E0AAF: @ 0x081E0AAF
	.string "ユウキ『オレ……\nミシロタウンに もどるつもり なんだ\pとうさんの てつだいで つくっている\nポケモンずかんも けっこう できてきたし\lいちど とうさんに みせておかないと{EOS}"
	.if (. - gText_Rom_1E0AAF) > 0x57
	.error "gText_Rom_1E0AAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0AAF) < 0x57
	.space 0x57 - (. - gText_Rom_1E0AAF)
	.endif
