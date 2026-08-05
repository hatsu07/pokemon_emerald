	@ data/text/tv.inc:1192 GabbyAndTy_Text_YouThrewABallAtUsInterviewAgain
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_253048
gText_Rom_253048: @ 0x08253048
	.string "そうそう まえに たたかった ときは\nボールを なげられ たんだっけ……\pもう びっくりして みんなに\nいいふらし ちゃったわよ!\pところで どう?\nまた インタビュー うけてみる?"
	.byte EOS
	.if (. - gText_Rom_253048) != 0x5c
	.error "gText_Rom_253048 must retain its original byte length"
	.endif
