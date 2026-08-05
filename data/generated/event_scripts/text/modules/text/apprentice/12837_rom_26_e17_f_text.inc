	@ data/text/apprentice.inc:175 gText_ApprenticeWhichLevelMode10
	.globl gText_Rom_26E17F
gText_Rom_26E17F: @ 0x0826E17F
	.string "やったー!\nおれいに ふねを かって あげよう!\pなんて じょうだん だけど……\nししょう! よろしく たのむぜ!\pあのさ バトルタワーで\nレベル50と オープンレベルと あるだろ!\pどっちで がんばれば いいか\nまよってるんだよ……\lししょうが きめて くれないかな?"
	.byte EOS
	.if (. - gText_Rom_26E17F) > 0x88
	.error "gText_Rom_26E17F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E17F) < 0x88
	.space 0x88 - (. - gText_Rom_26E17F)
	.endif
