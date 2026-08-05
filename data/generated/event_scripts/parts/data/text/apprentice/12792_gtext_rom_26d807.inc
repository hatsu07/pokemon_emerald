	@ data/text/apprentice.inc:109 gText_ApprenticePleaseTeach5
	.globl gText_Rom_26D807
gText_Rom_26D807: @ 0x0826D807
	.string "ああ きみ! {PLAYER}{KUN}!\nゆうめい だから しってるぜ\lオレは {STR_VAR_1} よろしく!\pオレは トライアスリート やってて\nからだを きたえる かたわら\lポケモンも そだてて ほかにも\lバイトに ひるねに しゃこうダンス……\pいそがしくて なっかなか\nいい トレーナーに なれないんだよね!\pそこで おねがい!\pここで あえたのも なにかの ごえん!\n{PLAYER}{KUN} たまに オレに\lアドバイスを おねがい できないかな?"
	.byte EOS
	.if (. - gText_Rom_26D807) > 0xce
	.error "gText_Rom_26D807 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D807) < 0xce
	.space 0xce - (. - gText_Rom_26D807)
	.endif
