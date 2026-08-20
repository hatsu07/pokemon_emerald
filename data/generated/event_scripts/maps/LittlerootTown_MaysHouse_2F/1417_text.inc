	@ data/maps/LittlerootTown_MaysHouse_2F/scripts.inc:310 RivalsHouse_2F_Text_MayWhoAreYou
	.globl gText_Rom_1F0DE8
gText_Rom_1F0DE8: @ 0x081F0DE8
	.string "えっ……!?\nあなた だれ…… なの?\p…… …… ……\n…… …… ……\pあなたが {PLAYER}{KUN}……\nそうか きょう ひっこし だったんだ……\pあ あたし ハルカ!\nよ よろしくね\pあたし……\nせかいじゅうの ポケモンと\lともだちに なるのが ゆめ なの……\pで でね\nおとうさん…… オダマキはかせ から\l{PLAYER}{KUN}の おはなし きいて\pあたし {PLAYER}{KUN} とも\nおともだちに なれたらなあ……\lなんて おもってたの……\pあっ あたしったら {PLAYER}{KUN}と\nはじめて おはなし してるのに\lなに いってんだろ……\pてへへ……\pあっ いけない!\pあたし おとうさんの おてつだいで\nやせいの ポケモン\lつかまえに いくところ だったんだ!\pでかける したくを するから\n{PLAYER}{KUN} また あとでね!{EOS}"
	.if (. - gText_Rom_1F0DE8) > 0x158
	.error "gText_Rom_1F0DE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0DE8) < 0x158
	.space 0x158 - (. - gText_Rom_1F0DE8)
	.endif
