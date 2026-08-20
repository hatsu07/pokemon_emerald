	@ data/maps/AquaHideout_1F/scripts.inc:59 AquaHideout_1F_Text_BossWentToJackASubmarine
	.globl gText_Rom_217A9D
gText_Rom_217A9D: @ 0x08217A9D
	.string "なんだ なんだ!\nおれたち アクアだんに なんの ようだ!\pリーダーだったら いま せんすいていを\nぶんどりに でかけていて るすだぞ!\p……どこに いったのか だって?\pわはははっ! そんな だいじな ことを\nおしえられる わけ ないだろうが!{EOS}"
	.if (. - gText_Rom_217A9D) > 0x7c
	.error "gText_Rom_217A9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217A9D) < 0x7c
	.space 0x7c - (. - gText_Rom_217A9D)
	.endif
