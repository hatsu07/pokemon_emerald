	@ data/maps/Route102/scripts.inc:85 Route102_Text_ImNotVeryTall
	.globl gText_Rom_1E69C7
gText_Rom_1E69C7: @ 0x081E69C7
	.string "ぼく…… せが ひくいから\nくさむらを あるくと もぐっちゃうんだ\pハッパが はなの あなに はいって\nふぁ　ふぁ ふぁ ふぁ……\pぶわっくしょーん!{EOS}"
	.if (. - gText_Rom_1E69C7) > 0x4c
	.error "gText_Rom_1E69C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E69C7) < 0x4c
	.space 0x4c - (. - gText_Rom_1E69C7)
	.endif
