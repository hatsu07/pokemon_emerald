	@ data/text/apprentice.inc:79 gText_ApprenticeWhichLevelMode2
	.globl gText_Rom_26D32A
gText_Rom_26D32A: @ 0x0826D32A
	.string "ありがとう ございます!\nじゃあ さっそく さいしょの しつもん!\pバトルタワーって レベル50と オープンと\nふたつの レベルが ありますよね!\pどっちの レベルが\nぼくに あってると おもいますか?"
	.byte EOS
	.if (. - gText_Rom_26D32A) > 0x66
	.error "gText_Rom_26D32A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D32A) < 0x66
	.space 0x66 - (. - gText_Rom_26D32A)
	.endif
