	@ data/text/apprentice.inc:769 gText_ApprenticePickWinSpeech0
	.globl gText_Rom_2726CF
gText_Rom_2726CF: @ 0x082726CF
	.string "ああっ {PLAYER}さん\n{PLAYER}さんだ! わわーん!\lぐすん ひっく きいて ください\pぼくっ ぼく しょうぶ するとき\nものすごく きんちょう して\lかっても ないちゃうん です……\pなにか かっこいい こと いえたら\nいいなと おもうんです けど……\pあのう あのう {PLAYER}さん\nもし よかったら……\lぼく なかなくて いいように\lなにか かったときに いう ことばを\lかんがえて もらえませんか?$"
	.if (. - gText_Rom_2726CF) > 0xc4
	.error "gText_Rom_2726CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2726CF) < 0xc4
	.space 0xc4 - (. - gText_Rom_2726CF)
	.endif
