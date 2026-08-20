	@ data/maps/MauvilleCity/scripts.inc:654 MauvilleCity_Text_ExplainTV
	.globl gText_Rom_1DE62C
gText_Rom_1DE62C: @ 0x081DE62C
	.string "ねえ きみ\nテレビって チェック してるかい?\pさいきんに なって おもしろい\nばんぐみが きゅうに ふえたんだぜ!\pいいよね テレビって\nいきなり ともだちの ことが\lしょうかい されたり\pしらない うちに じぶんが\nテレビに でていたり するんだよ\pこんど ぼくも テレビに\nうつんない かなー\pきみも こんどから\nちゃんと チェックを してみなよ!{EOS}"
	.if (. - gText_Rom_1DE62C) > 0xb2
	.error "gText_Rom_1DE62C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DE62C) < 0xb2
	.space 0xb2 - (. - gText_Rom_1DE62C)
	.endif
