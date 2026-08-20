	@ data/maps/MtPyre_Summit/scripts.inc:494 MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis
	.globl gText_Rom_2172A1
gText_Rom_2172A1: @ 0x082172A1
	.string "ああ なんという ことだ……!\pあいいろのたま だけではなく\nべにいろのたま までもが\lうばわれて しまうとは……\pあいいろのたまと べにいろのたまが\nはなればなれに なって しまうなど\lけっして あっては ならないこと……\pあの おとこたちは ふたつのたまで\nいったい なにを するきなのか……\p…… …… ……\n…… …… ……\pそういえば さいしょに あらわれて\nあいいろのたまを うばって いった\lマグマだん とやらが\lこんなものを おとしていった……\pこれが なんなのか わたしには わからん\pおまえさん よかったら こいつを\nもらって おくれ……\pもしかすると なにかの やくに\nたつのでは ないだろうか……!{EOS}"
	.if (. - gText_Rom_2172A1) > 0x138
	.error "gText_Rom_2172A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2172A1) < 0x138
	.space 0x138 - (. - gText_Rom_2172A1)
	.endif
