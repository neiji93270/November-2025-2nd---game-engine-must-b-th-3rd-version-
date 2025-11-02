//there is no reasoning on having inneev layers on ddrram cache itself.
//but threads on ssd hds could be stoppend on close log(15) msecinds.
//so we need to close one thread each time we enter a deeper layer.
//then we can create zombi threads on async devices if the models equations use
//high range equation parameters. so the cpu registrrs dont need to share ui/ux datas
//this is again a loop that  hyperthreading can resilve.
