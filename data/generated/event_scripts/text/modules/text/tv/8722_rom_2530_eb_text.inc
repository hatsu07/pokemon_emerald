	@ data/text/tv.inc:1198 GabbyAndTy_Text_WeLookedRespectableInterviewAgain
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2530EB
gText_Rom_2530EB: @ 0x082530EB
	.string "そうそう まえに たたかった ときは\nけっこう いいしょうぶ だったんだよね……\pところで どう?\nまた インタビュー うけてみる?"
	.byte EOS
	.if (. - gText_Rom_2530EB) != 0x43
	.error "gText_Rom_2530EB must retain its original byte length"
	.endif
