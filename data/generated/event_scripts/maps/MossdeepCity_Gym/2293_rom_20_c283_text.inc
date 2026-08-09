	@ data/maps/MossdeepCity_Gym/scripts.inc:525 MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons (+1 aliases)
	.globl gText_Rom_20C283
gText_Rom_20C283: @ 0x0820C283
	.string "フウ『また ぼくたちと……\nラン『また あたしたちと……\pフウ『しょうぶを しに きてくれたんだね\nラン『しょうぶを しに きてくれたんだね\pフウ『でも……\nラン『あなた たたかえる ポケモンを\pフウ『1ひきしか もって いないよ!\nラン『1ひきしか もって いないわ!\pフウ『できれば 2ひき いじょうの\nラン『ポケモンを もって また きてね!$"
	.if (. - gText_Rom_20C283) > 0xaf
	.error "gText_Rom_20C283 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C283) < 0xaf
	.space 0xaf - (. - gText_Rom_20C283)
	.endif
	@ Replaced baserom.gba range: offset=0x20C332, size=0x3A
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x00, 0x6A, 0x5A, 0x7E, 0x00, 0x0F, 0x00
	.4byte gText_Rom_20C36C @ ROM pointer 0x0820C36C
	.byte 0x09, 0x04, 0x26, 0x0D, 0x80, 0x15, 0x01, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x59, 0xC3
	.byte 0x20, 0x08, 0x0F, 0x00
	.4byte gText_Rom_20C37B @ ROM pointer 0x0820C37B
	.byte 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00, 0x9B, 0xC3, 0x20, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00
	.4byte gText_Rom_20C3B0 @ ROM pointer 0x0820C3B0
	.byte 0x09, 0x02, 0x02
