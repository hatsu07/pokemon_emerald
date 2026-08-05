	@ data/text/secret_base_trainers.inc:127 SecretBase_Text_Trainer8Intro
	.globl gText_Rom_2457A0
gText_Rom_2457A0: @ 0x082457A0
	.string "グッズを てにいれる ほうほうは\nいろいろ あるって はなしよ\pどっちが すてきな グッズを\nてにいれるか きょうそうね!\pついでに ポケモン しょうぶも しない?$"
	.if (. - gText_Rom_2457A0) > 0x53
	.error "gText_Rom_2457A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2457A0) < 0x53
	.space 0x53 - (. - gText_Rom_2457A0)
	.endif
