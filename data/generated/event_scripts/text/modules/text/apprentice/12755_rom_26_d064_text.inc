	@ data/text/apprentice.inc:55 gText_ApprenticeWhichLevelMode0
	.globl gText_Rom_26D064
gText_Rom_26D064: @ 0x0826D064
	.string "えー ほんとですか!\nやった! うれしいよう! うぉぉーん!\pあ…… ごめん なさい\nうれしくて なみだが……\pあのう じゃあ おしえて ください!\nバトルタワーの へや なんですけど\lレベル50と オープンレベルの へや\lぼく だったら どっちが いいのかな……?"
	.byte EOS
	.if (. - gText_Rom_26D064) > 0x86
	.error "gText_Rom_26D064 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D064) < 0x86
	.space 0x86 - (. - gText_Rom_26D064)
	.endif
