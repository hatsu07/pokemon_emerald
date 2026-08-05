	@ data/text/apprentice.inc:736 gText_ApprenticeMoveThanks10
	.globl gText_Rom_272263
gText_Rom_272263: @ 0x08272263
	.string "そうか\n{STR_VAR_1}が いいのね!\lじゃあ ちがうわざに しようっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pありがとう ししょう!\nまた あったら よろしくなー$"
	.if (. - gText_Rom_272263) > 0x5d
	.error "gText_Rom_272263 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272263) < 0x5d
	.space 0x5d - (. - gText_Rom_272263)
	.endif
