	@ data/text/match_call.inc:946 MatchCall_Text_MrStone10
	.globl gText_Rom_26C687
gText_Rom_26C687: @ 0x0826C687
	.string "ツワブキ『{PLAYER}{KUN}! わしだ!\pなんだか いろいろ あった らしいが\nいそがしい わしには\lなんの ことだか サッパリ わからん!\pとにかく キミは じぶんの しんじた\nみちを あゆんで いきたまえ!\pわしも カゲながら おうえん しとるぞ!\nじゃあな!"
	.byte EOS
	.if (. - gText_Rom_26C687) > 0x80
	.error "gText_Rom_26C687 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C687) < 0x80
	.space 0x80 - (. - gText_Rom_26C687)
	.endif
