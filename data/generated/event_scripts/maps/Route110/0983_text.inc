	@ data/maps/Route110/scripts.inc:820 Route110_Text_YouGotBikeFromRydel
	.globl gText_Rom_1E9A24
gText_Rom_1E9A24: @ 0x081E9A24
	.string "おっ! その じてんしゃ\nミスターカゼノに もらったんだね!\pみれば わかるよ\nだって きみの じてんしゃに……\pカゼノ カゼノ カゼノ カゼノ カゼノ\nカゼノ カゼノ カゼノ カゼノ カゼノ\pカゼノ カゼノ カゼノ カゼノ カゼノ\nカゼノ カゼノ カゼノ カゼノ カゼノ\pカゼノ カゼノ カゼノ カゼノ カゼノ\nカゼノ カゼノ カゼノ カゼノ カゼノ\pカゼノ カゼノ カゼノ カゼノ カゼノ\nカゼノ カゼノ カゼノ カゼノ カゼノ\pカゼノ カゼノ カゼノ カゼノ カゼノ\n……って かいて あるんだもん!\pあっちこっち のりまわして\nせんでん してあげると いいね!{EOS}"
	.if (. - gText_Rom_1E9A24) > 0x11d
	.error "gText_Rom_1E9A24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E9A24) < 0x11d
	.space 0x11d - (. - gText_Rom_1E9A24)
	.endif
