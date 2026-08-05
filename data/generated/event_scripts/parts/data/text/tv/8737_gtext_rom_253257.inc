	@ data/text/tv.inc:1183 GabbyAndTy_Text_GiveUsAnInterviewThisTime
	.globl gText_Rom_253257
gText_Rom_253257: @ 0x08253257
	.string "マリ『うーん さすがね!\pまえに たたかった ときより\nずっと つよく なってる!\pやっぱり わたしたちが みつけた\nトレーナー よね!\pところで どう?\nこんどこそ インタビューを\lうけて もらえないかな?"
	.byte EOS
	.if (. - gText_Rom_253257) > 0x69
	.error "gText_Rom_253257 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_253257) < 0x69
	.space 0x69 - (. - gText_Rom_253257)
	.endif
