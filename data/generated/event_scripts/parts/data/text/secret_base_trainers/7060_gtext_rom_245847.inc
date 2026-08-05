	@ data/text/secret_base_trainers.inc:142 SecretBase_Text_Trainer8PreChampion
	.globl gText_Rom_245847
gText_Rom_245847: @ 0x08245847
	.string "グッズを てにいれる ほうほうは\nいろいろ あるって はなしよ\pどっちが すてきな グッズを\nてにいれるか きょうそうね!$"
	.if (. - gText_Rom_245847) > 0x3e
	.error "gText_Rom_245847 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245847) < 0x3e
	.space 0x3e - (. - gText_Rom_245847)
	.endif
