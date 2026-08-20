	@ data/text/trainers.inc:3353 Route134_Text_JackPostBattle
	.globl gText_Rom_262091
gText_Rom_262091: @ 0x08262091
	.string "ポケモンたちは この ながれを\nたのしんでる みたいだよ!{EOS}"
	.if (. - gText_Rom_262091) > 0x1e
	.error "gText_Rom_262091 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262091) < 0x1e
	.space 0x1e - (. - gText_Rom_262091)
	.endif
