	@ data/maps/SootopolisCity_PokemonCenter_1F/scripts.inc:46 SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn
	.globl gText_Rom_20F046
gText_Rom_20F046: @ 0x0820F046
	.string "この まちの ジムリーダーは\nホウエンちほう でも いちばんと\lうわさの じつりょくしゃ ミクリに\pポケモン しょうぶの てほどきを した\nじんぶつが やっているのだ\pしかし そんな ミクリの ししょうよりも\nつよいと いわれる してんのう……\lその つよさは どれほどの ものだろう$"
	.if (. - gText_Rom_20F046) > 0x8f
	.error "gText_Rom_20F046 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F046) < 0x8f
	.space 0x8f - (. - gText_Rom_20F046)
	.endif
