	@ data/text/trainers.inc:1136 Route112_Text_CarolPostBattle
	.globl gText_Rom_25C4BA
gText_Rom_25C4BA: @ 0x0825C4BA
	.string "うたも ポケモンしょうぶも\nうまい へた なんて かんけい ないよ!\lたのしんだ ほうが かち なのよ!$"
	.if (. - gText_Rom_25C4BA) > 0x35
	.error "gText_Rom_25C4BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C4BA) < 0x35
	.space 0x35 - (. - gText_Rom_25C4BA)
	.endif
