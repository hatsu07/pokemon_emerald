	@ data/text/trainers.inc:2849 Route126_Text_PabloPostBattle
	.globl gText_Rom_260CAB
gText_Rom_260CAB: @ 0x08260CAB
	.string "まけて いい しげきに なったよ!\nからだも ポケモンも もっと きたえるぜ{EOS}"
	.if (. - gText_Rom_260CAB) > 0x27
	.error "gText_Rom_260CAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260CAB) < 0x27
	.space 0x27 - (. - gText_Rom_260CAB)
	.endif
