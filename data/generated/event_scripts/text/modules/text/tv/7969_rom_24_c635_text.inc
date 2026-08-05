	@ data/text/tv.inc:1129 LilycoveCity_ContestLobby_Text_WhatImageWhenYouHearX
	.globl gText_Rom_24C635
gText_Rom_24C635: @ 0x0824C635
	.string "うーん なるほど!\pどんな コンテストだったか\nよくわかる ひとこと ですね!\p……さいごに\nちょっと おききしたいの ですが\pあなたが イメージする {STR_VAR_2}って\nいったい どんなもの ですかね?$"
	.if (. - gText_Rom_24C635) > 0x62
	.error "gText_Rom_24C635 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C635) < 0x62
	.space 0x62 - (. - gText_Rom_24C635)
	.endif
