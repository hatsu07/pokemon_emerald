	@ data/text/tv.inc:1189 GabbyAndTy_Text_YouStompedUsInterviewAgain
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_253007
gText_Rom_253007: @ 0x08253007
	.string "そうそう まえに たたかった ときは\nても あしも でなかった のよねぇ……\pところで どう?\nまた インタビュー うけてみる?"
	.byte EOS
	.if (. - gText_Rom_253007) != 0x41
	.error "gText_Rom_253007 must retain its original byte length"
	.endif
