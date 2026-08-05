	@ data/text/apprentice.inc:799 gText_ApprenticePickWinSpeech5
	.globl gText_Rom_272C65
gText_Rom_272C65: @ 0x08272C65
	.string "あー いそがしい いそがしい!\nおっと さがしてたよ {PLAYER}{KUN}\lきょうも げんきかい?\pこっちはさー! あいかわらず\nランニング ファイティング マッピングと\lなんで こんなに いそがしいんだ?\pでもさ! いそがしい からって\nしょうぶに かった ときに\lなにも いわないで\lたちさっちゃ しつれいだろ?\pでさ!\nかっこよく たちさる オレを\lえんしゅつする いい ことば ないかな?\l{PLAYER}{KUN} なんか たのむよ!$"
	.if (. - gText_Rom_272C65) > 0xd0
	.error "gText_Rom_272C65 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272C65) < 0xd0
	.space 0xd0 - (. - gText_Rom_272C65)
	.endif
