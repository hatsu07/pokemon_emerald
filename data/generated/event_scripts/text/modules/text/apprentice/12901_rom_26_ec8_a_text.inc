	@ data/text/apprentice.inc:268 gText_ApprenticeItemAlreadyRecommended1
	.globl gText_Rom_26EC8A
gText_Rom_26EC8A: @ 0x0826EC8A
	.string "あ えっと そうじゃなくて\nまだ おしえて もらってない どうぐで\lなにが いいか しりたいんだ!\pそれとも こんどは\nなにも もたせなくって いいのかな?"
	.byte EOS
	.if (. - gText_Rom_26EC8A) > 0x4f
	.error "gText_Rom_26EC8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EC8A) < 0x4f
	.space 0x4f - (. - gText_Rom_26EC8A)
	.endif
