	@ data/text/tv.inc:1132 LilycoveCity_ContestLobby_Text_ThatsAllForInterview
	.globl gText_Rom_24C697
gText_Rom_24C697: @ 0x0824C697
	.string "なるほど!\pそれが あなたの イメージする\n{STR_VAR_2} なんですね!\pいろいろ さんこうに なりました!\pコンテストに ついて\nいい きじが かけそう ですよ\pもしかしたら テレビで このことが\nながれるかも しれないので\lたのしみに してくださいね!$"
	.if (. - gText_Rom_24C697) > 0x7c
	.error "gText_Rom_24C697 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C697) < 0x7c
	.space 0x7c - (. - gText_Rom_24C697)
	.endif
