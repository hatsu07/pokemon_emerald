	@ data/maps/LittlerootTown_MaysHouse_1F/scripts.inc:359 RivalsHouse_1F_Text_MayWhoAreYou
	.globl gText_Rom_1F0843
gText_Rom_1F0843: @ 0x081F0843
	.string "あら? あなた……だれ?\p…… …… ……\n…… …… ……\pあなたが {PLAYER}{KUN}……\nそうか きょう ひっこし だったんだ……\pあ あたし ハルカ!\nよ よろしくね\pあたし……\nせかいじゅうの ポケモンと\lともだちに なるのが ゆめ なの……\pで でね\nおとうさん…… オダマキはかせ から\l{PLAYER}{KUN}の おはなし きいて\pあたし {PLAYER}{KUN} とも\nおともだちに なれたらなあ……\lなんて おもってたの……\pあっ あたしったら {PLAYER}{KUN}と\nはじめて おはなし してるのに\lなに いってんだろ……\pてへへ……\pあっ いけない!\pあたし おとうさんの おてつだいで\nやせいの ポケモン\lつかまえに いくところ だったんだ!\pでかける したくを するから\n{PLAYER}{KUN} また あとでね!$"
	.if (. - gText_Rom_1F0843) > 0x151
	.error "gText_Rom_1F0843 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0843) < 0x151
	.space 0x151 - (. - gText_Rom_1F0843)
	.endif
