	@ data/maps/BattleFrontier_BattlePyramidTop/scripts.inc:228 BattleFrontier_BattlePyramidTop_Text_ImPyramidKingBrandon
	.globl gText_Rom_22EECD
gText_Rom_22EECD: @ 0x0822EECD
	.string "いやぁー じつに たまらない!\nたまらないじゃ ないか! なあっ!?\pわたしは ジンダイ!\pここの せきにんしゃで ある\nピラミッドキングだが みんなには\lたいちょうと よばれて いるぞ!\pきみも ここまで きたと いうことは\nそれなりの じしんが あるの だろう?\lはっはっは! いやぁー じつに たのしみだ!"
	.byte EOS
	.if (. - gText_Rom_22EECD) > 0x9d
	.error "gText_Rom_22EECD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22EECD) < 0x9d
	.space 0x9d - (. - gText_Rom_22EECD)
	.endif
