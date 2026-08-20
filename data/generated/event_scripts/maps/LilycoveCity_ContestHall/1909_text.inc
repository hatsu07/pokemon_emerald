	@ data/maps/LilycoveCity_ContestHall/scripts.inc:316 LilycoveCity_ContestHall_Text_EnteredBunchOfContests
	.globl gText_Rom_207AD4
gText_Rom_207AD4: @ 0x08207AD4
	.string "なんども コンテストに でていて\nなんとなく わかって きたんだけど\pたとえば かっこいいコンテストで\nかっこいいわざを だすと うけるけど\lかしこいアピールや かわいいアピールは\lなぜか うけが わるいんだよな……{EOS}"
	.if (. - gText_Rom_207AD4) > 0x6d
	.error "gText_Rom_207AD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207AD4) < 0x6d
	.space 0x6d - (. - gText_Rom_207AD4)
	.endif
