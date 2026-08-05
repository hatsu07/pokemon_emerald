	@ data/text/apprentice.inc:178 gText_ApprenticeLevelModeThanks10
	.globl gText_Rom_26E207
gText_Rom_26E207: @ 0x0826E207
	.string "そうか\n{STR_VAR_1}が いいのね!\lじゃあ ちがうほうに いこうっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pありがとう ししょう!\nまた あったら よろしくなー"
	.byte EOS
	.if (. - gText_Rom_26E207) > 0x5d
	.error "gText_Rom_26E207 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E207) < 0x5d
	.space 0x5d - (. - gText_Rom_26E207)
	.endif
