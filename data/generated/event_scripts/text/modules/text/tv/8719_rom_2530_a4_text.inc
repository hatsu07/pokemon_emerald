	@ data/text/tv.inc:1195 GabbyAndTy_Text_CleverItemSkillsInterviewAgain
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2530A4
gText_Rom_2530A4: @ 0x082530A4
	.string "そうそう まえに たたかった ときは\nどうぐを うまく つかわれて\lまけちゃった のよね\pところで どう?\nまた インタビュー うけてみる?"
	.byte EOS
	.if (. - gText_Rom_2530A4) != 0x47
	.error "gText_Rom_2530A4 must retain its original byte length"
	.endif
